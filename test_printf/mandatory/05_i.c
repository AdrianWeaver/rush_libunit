/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_i.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:16:57 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 08:15:29 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 
#include "libunit.h"
#include "libft.h"
#include "libftprintf.h"
#include "libft_mandatory.h"
#include <limits.h>

int	test_i(void)
{
	t_list_test_printf	list;
	int					pipefd[2];
	int					ret;
	int					tab[7];
	int					i;

	tab[0] = 0;
	tab[1] = -0;
	tab[2] = 42;
	tab[3] = INT_MAX;
	tab[4] = INT_MIN;
	tab[5] = 10;
	tab[6] = -10;
	ret = 0;
	i = 0;
	while (i < 7)
	{
		list.ret_ptf = sprintf(list.ptf_str, "%i", tab[i]);
		ft_pipe_stdout(pipefd);
		list.ret_ft = ft_printf("%i", tab[i]);
		list.ft_str = ft_read_fd(pipefd, list.ret_ptf + 2);
		ft_reset_stdout(pipefd, 1);
		if (list.ret_ft != list.ret_ptf)
			ret = -1;
		if (ft_strncmp(list.ptf_str, list.ft_str, 10) != 0)
			ret = -1;
		free(list.ft_str);
		i++;
	}
	return (ret);
}
