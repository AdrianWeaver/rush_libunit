/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:08:46 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/21 16:50:07 by aweaver          ###   ########.fr       */
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

	printf("made it in test_c");
	ret = 0;
	stdout_save = ft_pipe_stdout(pipefd);
	list.ret_ptf = printf("%c", 'a');
	list.ptf_str = ft_read_fd(pipefd[0]);
	ft_reset_stdout(pipefd, stdout_save);
	stdout_save = ft_pipe_stdout(pipefd);
	list.ret_ft = ft_printf("%c", 'a');
	list.ft_str = ft_read_fd(pipefd[0]);
	ft_reset_stdout(pipefd, stdout_save);
	if (list.ret_ft != list.ret_ptf)
		ret = -1;
	if (ft_strncmp(list.ptf_str, list.ft_str, 10) != 0)
		ret = -1;
	printf("Ptf: %s\nFt_ptf: %s\n", list.ptf_str, list.ft_str);
	free(list.ptf_str);
	free(list.ft_str);
	return (ret);
}

int	main(void)
{
	printf("yeah\n");
	test_c();
	return (0);
}
