/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   17_whitespace_alternative2.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:51:45 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 11:53:03 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"
#include "test_ft_atoi.h"

int	test_whitespace_alternative2(void)
{
	if (ft_atoi("\r\r42") == 42)
		return (0);
	else
		return (-1);
}
