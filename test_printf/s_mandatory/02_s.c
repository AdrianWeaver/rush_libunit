/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:06:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/26 13:58:28 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 
#include "libunit.h"
#include "libft.h"
#include "libftprintf.h"
#include "libft_mandatory.h"

int	test_s02(void)
{
	t_list_test_printf	list;
	int					pipefd[2];
	int					ret;
	const char			*tab[8];
	int					i;

	tab[0] = "";
	tab[1] = "toto aime zaza  ";
	tab[2] = "\33\32\33\32\n\t";
	tab[3] = "A";
	tab[4] = "jesuisunlongstringsansespaceetjetestedestrucsiables";
	tab[5] = "\f\n\r\t\v ";
	tab[6] = "%";
	tab[7] = 0;
	ret = 0;
	i = 0;
	while (i < 8)
	{
		list.ret_ptf = sprintf(list.ptf_str, "%s\n", tab[i]);
		ft_pipe_stdout(pipefd);
		list.ret_ft = ft_printf("%s\n", tab[i]);
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
