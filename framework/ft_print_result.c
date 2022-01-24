/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:42:01 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 11:47:30 by aweaver          ###   ########.fr       */
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
	else if (w_result == 33)
		ft_putstr_colour("[KO: Test failed.]\n", RED);
	else if (w_result == 11)
		ft_putstr_fd("[SIGSEGV : Segmentation Fault detected].\n", 1);
	else if (w_result == 7)
		ft_putstr_fd("[SIGBUS : Bus Error detected.]\n", 1);
	else if (w_result == 6)
		ft_putstr_fd("[SIGABRT: Abort.]\n", 1);
	else if (w_result == 8)
		ft_putstr_fd("[SIGFPE: Floating point exception.]\n", 1);
	else if (w_result == 4)
		ft_putstr_fd("[SIGILL: Illegal instruction.]\n", 1);
}
