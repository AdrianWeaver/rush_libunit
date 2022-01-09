/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_even_values.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:20:16 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 10:23:20 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_ft_atoi.h"
#include "libunit.h"

int	test_even_values(void)
{
	if (ft_atoi("22") == 22)
		return (0);
	else
		return (-1);
}
