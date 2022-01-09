/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_whitespace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:48:05 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 11:48:38 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"
#include "test_ft_atoi.h"

int	test_whitespace(void)
{
	if (ft_atoi(" ") == 0)
		return (0);
	else
		return (-1);
}
