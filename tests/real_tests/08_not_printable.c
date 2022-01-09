/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_not_printable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:48:25 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 10:57:36 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"
#include "test_ft_atoi.h"

int	test_not_printable(void)
{
	if (ft_atoi("\a") == 0)
		return (0);
	else
		return (-1);
}
