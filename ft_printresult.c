/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printresult.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:25:20 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/08 17:28:57 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "./libft/libft.h"
#include <sys/types.h>
#include <sys/wait.h>

void	ft_print_result(t_test_list current, int w_result)
{
	ft_putstr(current->func_name);
	ft_putstr(current->test_name);
	if (w_result == 32)
		ft_putstr("OK : Test succeeded.\n");
	else if (w_result == 33)
		ft_putstr("KO : Test failed.\n");
	else if (w_result == 11)
		ft_putstr("SIGSEGV : Segmentation Fault detected.\n");
	else if (w_result == 7)
		ft_putstr("SIGBUS : Bus Error detected.\n");
	else if (w_result == 6)
		ft_putstr("SIGABRT: Abort.\n");
	else if (w_result == 8)
		ft_putstr("SIGFPE: Floating point exception.\n");
	else if (w_result == 4)
		ft_putstr("SIGILL: Illegal instruction.\n");
}

void	ft_check_result(int w_result)
{
	if (WIFEXITED(w_result))
		w_result = WEXITSTATUS(w_result);
	else if (WIFSIGNALED(w_result))
		w_result = WTERMSIG(w_result);
	ft_print_result(w_result);
}
