/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_sigfpe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:21:36 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 22:54:45 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>

int	ft_test_sigfpe(void)
{
	if (1)
	{
		raise(SIGFPE);
		return (0);
	}
	else
		return (-1);
}
