/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_whitespace_number.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:04:14 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 12:04:16 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"
#include "test_ft_atoi.h"

int	test_whitespace_number(void)
{
	if (ft_atoi(" 42") == 42)
		return (0);
	else
		return (-1);
}
