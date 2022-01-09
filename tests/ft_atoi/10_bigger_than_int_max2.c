/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_bigger_than_int_max2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:05:25 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 13:05:26 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"
#include "test_ft_atoi.h"

int	test_smaller_than_int_max2(void)
{
	ft_atoi("2147483648");
	return (0);
}
