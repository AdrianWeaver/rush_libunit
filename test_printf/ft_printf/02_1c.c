/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_1c.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:16:57 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/23 22:31:33 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 
#include "libunit.h"
#include "libft.h"
#include "libftprintf.h"
#include "libft_test_ft_printf.h"

int	test_1c(void)
{
	t_list_test_printf	list;
	int					pipefd[2];
	int					stdout_save;
	int					ret;
	char				*test;

	ret = 0;
	test = "%1c\n";
	list.ret_ptf = sprintf(list.ptf_str, test, '1');
	stdout_save = ft_pipe_stdout(pipefd);
	list.ret_ft = ft_printf(test, '1');
	list.ft_str = ft_read_fd(pipefd, list.ret_ptf + 2);
	ft_reset_stdout(pipefd, stdout_save);
	if (list.ret_ft != list.ret_ptf)
		ret = -1;
	if (ft_strncmp(list.ptf_str, list.ft_str, 10) != 0)
		ret = -1;
	free(list.ft_str);
	return (ret);
}