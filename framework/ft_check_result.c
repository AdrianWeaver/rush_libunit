/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:42:01 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 20:27:49 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include <sys/types.h>
#include <sys/wait.h>

void	ft_check_result(int w_status, int *success)
{
	int	w_result;

	w_result = 0;
	if (WIFEXITED(w_status))
	{
		w_result = WEXITSTATUS(w_status);
		if (w_result != 0)
			w_result = 33;
		w_result = 32;
	}
	else if (WIFSIGNALED(w_status))
		w_result = WTERMSIG(w_status);
	ft_print_result(w_result);
	if (w_result == 32)
		(*success)++;
}
