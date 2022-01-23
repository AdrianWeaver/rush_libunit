/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:11:35 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/23 22:29:03 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"
#include <stdlib.h>

void	exec_child(t_test_list *lst)
{
	int	(*fct)(void);

	fct = lst->funct;
	ft_lstclear(&lst, &free);
	exit(fct());
}

static int	ft_make_magic(t_test_list *lst)
{
	ft_putstr_fd("Error: Fork failed.\n", 1);
	ft_lstclear(&lst, &free);
	return (-1);
}

int	ft_launch_test(t_test_list *lst)
{
	int			nb_test;
	int			success;
	int			w_status;
	int			pid;
	t_test_list	*tmp;

	success = 0;
	nb_test = 0;
	while (lst)
	{
		pid = fork();
		if (pid == -1)
			return (ft_make_magic(lst));
		wait(&w_status);
		if (pid == 0)
			exec_child(lst);
		ft_print_test(lst);
		ft_check_result(w_status, &success);
		tmp = lst;
		lst = lst->next;
		nb_test++;
		ft_lstdelone(tmp, &free);
	}
	ft_print_total(success, nb_test);
	if (success == nb_test)
		return (0);
	return (-1);
}
