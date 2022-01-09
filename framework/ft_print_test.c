/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:04:42 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 16:39:26 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"
#include "test_ft_atoi.h"

void	ft_print_test(t_test_list *lst)
{
	ft_putchar('[');
	ft_putstr(lst->routine_name);
	ft_putstr("]:");
	ft_putchar('[');
	ft_putstr(lst->test_name);
	ft_putstr("]:");
}
