/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:42:01 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 15:46:39 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include <sys/types.h>
#include <sys/wait.h>

void	ft_print_result(int w_result)
{
	if (w_result == 0)
		ft_putstr_colour("[OK]\n", GREEN);
	else if (w_result == SIGSEGV)
		ft_putstr_colour("[SIGSEGV: Segmentation Fault detected].\n", BRED);
	else if (w_result == 7)
		ft_putstr_colour("[SIGBUS: Bus Error detected.]\n", BRED);
	else if (w_result == 6)
		ft_putstr_colour("[SIGABRT: Abort.]\n", BRED);
	else if (w_result == 8)
		ft_putstr_colour("[SIGFPE: Floating point exception.]\n", BRED);
	else if (w_result == 4)
		ft_putstr_colour("[SIGILL: Illegal instruction.]\n", BRED);
	else if (w_result == 34)
		ft_putstr_colour("[MEMORY ERROR FROM TESTER]\n", BRED);
	else if (w_result == SIGALRM)
		ft_putstr_colour("[TIMEOUT]\n", BLUE);
	else if (w_result == 13)
		ft_putstr_colour("[SIGPIPE: Broken pipe.]\n", BRED);
	else if (w_result == 2 || w_result == 3)
		ft_putstr_colour("[HOW RUDE OF YOU TO STOP ME LIKE THAT.]\n", YELLOW);
	else
		ft_putstr_colour("[KO: Test failed.]\n", RED);
}
