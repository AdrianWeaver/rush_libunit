/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:08:46 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/22 13:26:44 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 
#include "libunit.h"
#include "libft.h"
#include "libftprintf.h"
#include "libft_test_ft_printf.h"

int	test_c(void)
{
	t_list_test_printf	list;
	int					pipefd[2];
	int					stdout_save;
	int					ret;

	ret = 0;
	stdout_save = ft_pipe_stdout(pipefd);
	list.ret_ptf = printf("%c", 'a');
	list.ptf_str = ft_read_fd(pipefd, list.ret_ptf);
	ft_reset_stdout(pipefd, stdout_save);
	stdout_save = ft_pipe_stdout(pipefd);
	list.ret_ft = ft_printf("%c", 'a');
	if (list.ret_ft != list.ret_ptf)
	{
		free(list.ptf_str);
		return (-1);
	}
	list.ft_str = ft_read_fd(pipefd, (list.ret_ptf + 2));
	ft_reset_stdout(pipefd, stdout_save);
	if (ft_strncmp(list.ptf_str, list.ft_str, 10) != 0)
		ret = -1;
	free(list.ptf_str);
	free(list.ft_str);
	return (ret);
}
