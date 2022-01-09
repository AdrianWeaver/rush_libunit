/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bus_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:09:05 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 21:22:27 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	bus_error_funct(void)
{
	char	*p;
	int		i;

	asm("pushf\n\torl $0x40000,(%rsp)\n\tpopf");
	p = malloc(sizeof(int) + 1);
	p++;
	i = *(int *)p;
	(void)i;
	return (1);
}

int	ft_test_bus_error(void)
{
	if (bus_error_funct() == 1)
		return (0);
	else
		return (-1);
}
