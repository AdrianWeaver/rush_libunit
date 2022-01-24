/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:10:35 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 11:13:54 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 
#include "libunit.h"
#include "libft.h"
#include "libftprintf.h"
#include "libft_mandatory.h"

int	test_c08(void)
{
	t_list_test_printf	list;
	int					pipefd[2];
	int					ret;
	int					tab[7];
	int					i;

	tab[0] = '\0';
	tab[1] = ' ';
	tab[2] = 'a';
	tab[3] = 'A';
	tab[4] = 'z';
	tab[5] = 'Z';
	tab[6] = '\n';
	ret = 0;
	i = 0;
	while (i < 7)
	{
		list.ret_ptf = sprintf(list.ptf_str, "%%c%c", tab[i]);
		ft_pipe_stdout(pipefd);
		list.ret_ft = ft_printf("%%c%c", tab[i]);
		list.ft_str = ft_read_fd(pipefd, list.ret_ptf + 2);
		ft_reset_stdout(pipefd, 1);
		if (list.ret_ft != list.ret_ptf)
			ret = -1;
		if (ft_strncmp(list.ptf_str, list.ft_str, list.ret_ptf + 2) != 0)
			ret = -1;
		free(list.ft_str);
		i++;
	}
	return (ret);
}
