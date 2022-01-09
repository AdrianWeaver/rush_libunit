/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:04:42 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 17:55:01 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"

void	ft_print_test(t_test_list *lst)
{
	ft_putchar_fd('[', 1);
	ft_putstr_fd(lst->routine_name, 1);
	ft_putstr_fd("]:", 1);
	ft_putchar_fd('[', 1);
	ft_putstr_fd(lst->test_name, 1);
	ft_putstr_fd("]:", 1);
}