/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_bigger_than_int_max.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:05:17 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 13:05:18 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"
#include "test_ft_atoi.h"

int	test_bigger_than_int_max(void)
{
	if (ft_atoi("4294967297") == 1)
		return (0);
	else
		return (-1);
}
