/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15_whitespace_negative_value.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:50:12 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 18:05:57 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"

int	test_whitespace_negative_value(void)
{
	if (ft_atoi(" -42") == -42)
		return (0);
	else
		return (-1);
}
