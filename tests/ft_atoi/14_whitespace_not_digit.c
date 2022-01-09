/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_whitespace_not_digit.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:03:41 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 12:03:43 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"
#include "test_ft_atoi.h"

int	test_whitespace_not_digit(void)
{
	if (ft_atoi(" a") == 0)
		return (0);
	else
		return (-1);
}
