/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_total.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:37:21 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 17:57:10 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

void	ft_print_total(int success, int total)
{
	ft_putnbr_fd(success, 1);
	ft_putchar_fd('/', 1);
	ft_putnbr_fd(total, 1);
	ft_putstr_fd(" test tested successfully!\n", 1);
}
