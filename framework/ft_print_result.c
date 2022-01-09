/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:42:01 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 16:43:42 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include <sys/types.h>
#include <sys/wait.h>

void	ft_print_result(int w_result)
{
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
