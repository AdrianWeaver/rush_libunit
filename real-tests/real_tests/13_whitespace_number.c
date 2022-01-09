/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_whitespace_number.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:04:14 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 18:05:41 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"

int	test_whitespace_number(void)
{
	if (ft_atoi(" 42") == 42)
		return (0);
	else
		return (-1);
}