/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_minus_zero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:28:04 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 10:28:31 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"
#include "test_ft_atoi.h"

int	test_minus_zero(void)
{
	if (ft_atoi("-0") == 0)
		return (0);
	else
		return (-1);
}
