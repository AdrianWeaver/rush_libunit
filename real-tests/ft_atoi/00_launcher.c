/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:10:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/23 17:22:53 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include "libft_test_atoi.h"
#include <stdlib.h>

int	ft_atoi_launcher(void)
{
	int			ret;
	t_test_list	*t_atoi;
	t_test_list	*t_start;

	t_start = ft_test_lst_new("ft_atoi", "odd_values", &test_odd_values, NULL);
	t_atoi = t_start;
	t_atoi = ft_test_lst_new("ft_atoi", "even_values", &test_even_values,
			t_atoi);
	t_atoi = ft_test_lst_new("ft_atoi", "zero", &test_zero, t_atoi);
	t_atoi = ft_test_lst_new("ft_atoi", "minus_zero", &test_minus_zero,
			t_atoi);
	t_atoi = ft_test_lst_new("ft_atoi", "int_max", &test_int_max, t_atoi);
	t_atoi = ft_test_lst_new("ft_atoi", "int_min", &test_int_min, t_atoi);
	t_atoi = ft_test_lst_new("ft_atoi", "not_digit", &test_not_digit, t_atoi);
	t_atoi = ft_test_lst_new("ft_atoi", "not_printable", &test_not_printable,
			t_atoi);
	t_atoi = ft_test_lst_new("ft_atoi", "bigger_than_int_max",
			&test_bigger_than_int_max, t_atoi);
	t_atoi = ft_test_lst_new("ft_atoi", "bigger_than_int_max2",
			&test_bigger_than_int_max2, t_atoi);
	t_atoi = ft_test_lst_new("ft_atoi", "bigger_than_int_max3",
			&test_bigger_than_int_max3, t_atoi);
	t_atoi = ft_test_lst_new("ft_atoi", "whitespace", &test_whitespace,
			t_atoi);
	t_atoi = ft_test_lst_new("ft_atoi", "whitespace_number",
			&test_whitespace_number, t_atoi);
	t_atoi = ft_test_lst_new("ft_atoi", "whitespace_not_digit",
			&test_whitespace_negative_value, t_atoi);
	t_atoi = ft_test_lst_new("ft_atoi", "whitespace_alternative",
			&test_whitespace_alternative, t_atoi);
	t_atoi = ft_test_lst_new("ft_atoi", "whitespace_alternative2",
			&test_whitespace_alternative2, t_atoi);
	t_atoi = ft_test_lst_new("ft_atoi", "whitesace_incorrect",
			&test_whitespace_incorrect, t_atoi);
	ret = ft_launch_test(t_start);
	ft_lstclear(&t_start, &free);
	return (ret);
}
