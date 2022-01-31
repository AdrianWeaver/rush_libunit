/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:57:59 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/28 11:29:10 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 
#include "libunit.h"
#include "libft.h"
#include "libftprintf.h"
#include "libft_mandatory.h"
#include <limits.h>

int	test_p02(void)
{
	t_list_test_printf	list;
	int					pipefd[2];
	int					ret;
	char				*tab[2];
	int					i;

	tab[0] = NULL;
	tab[1] = malloc(100);
	ret = 0;
	i = 0;
	while (i < 2)
	{
		list.ret_ptf = sprintf(list.ptf_str, "%p\n", tab[i]);
		ft_pipe_stdout(pipefd);
		list.ret_ft = ft_printf("%p\n", tab[i]);
		list.ft_str = ft_read_fd(pipefd, list.ret_ptf + 2);
		ft_reset_stdout(pipefd, 1);
		if (list.ret_ft != list.ret_ptf)
			ret = -1;
		if (ft_strncmp(list.ptf_str, list.ft_str, 10) != 0)
			ret = -1;
		free(list.ft_str);
		i++;
	}
	free(tab[1]);
	return (ret);
}
