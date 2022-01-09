/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_whitespace_alternative.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:50:57 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 11:51:36 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"
#include "test_ft_atoi.h"

int	test_whitespace_alternative(void)
{
	if (ft_atoi("	42") == 42)
		return (0);
	else
		return (-1);
}
