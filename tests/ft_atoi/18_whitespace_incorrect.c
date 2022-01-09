/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18_whitespace_incorrect.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:53:43 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 11:54:08 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"
#include "test_ft_atoi.h"

int	test_whitespace_incorrect(void)
{
	if (ft_atoi("\r\r-\r42") == 0)
		return (0);
	else
		return (-1);
}
