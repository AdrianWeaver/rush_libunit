/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:10:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/22 15:24:04 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include "libft_test_ft_printf.h"

int	ft_printf_launcher(void)
{
	t_test_list	*t_ft_ptf;
	t_test_list	*t_start;

	t_start = ft_test_lst_new("ft_printf", "01 -", &test_c, NULL);
	t_ft_ptf = t_start;
	(void)t_ft_ptf;
	//t_ft_ptf = ft_test_lst_new("ft_printf", "", &test_c, t_ft_ptf);
	////t_ft_ptf = ft_test_lst_new("ft_printf", "", &test_zero, t_ft_ptf);
	////t_ft_ptf = ft_test_lst_new("ft_printf", "", &test_minus_zero,
			////t_ft_ptf);
	//t_ft_ptf = ft_test_lst_new("ft_printf", "", &test_int_max, t_ft_ptf);
	//t_ft_ptf = ft_test_lst_new("ft_printf", "", &test_int_min, t_ft_ptf);
	//t_ft_ptf = ft_test_lst_new("ft_printf", "", &test_not_digit, t_ft_ptf);
	//t_ft_ptf = ft_test_lst_new("ft_printf", "", &test_not_printable,
			//t_ft_ptf);
	//t_ft_ptf = ft_test_lst_new("ft_printf", "",
			//&test_bigger_than_int_max, t_ft_ptf);
	//t_ft_ptf = ft_test_lst_new("ft_printf", "",
			//&test_bigger_than_int_max2, t_ft_ptf);
	//t_ft_ptf = ft_test_lst_new("ft_printf", "",
			//&test_bigger_than_int_max3, t_ft_ptf);
	//t_ft_ptf = ft_test_lst_new("ft_printf", "", &test_whitespace,
			//t_ft_ptf);
	//t_ft_ptf = ft_test_lst_new("ft_printf", "",
			//&test_whitespace_number, t_ft_ptf);
	//t_ft_ptf = ft_test_lst_new("ft_printf", "",
			//&test_whitespace_negative_value, t_ft_ptf);
	//t_ft_ptf = ft_test_lst_new("ft_printf", "",
			//&test_whitespace_alternative, t_ft_ptf);
	//t_ft_ptf = ft_test_lst_new("ft_printf", "",
			//&test_whitespace_alternative2, t_ft_ptf);
	//t_ft_ptf = ft_test_lst_new("ft_printf", "",
			//&test_whitespace_incorrect, t_ft_ptf);
	return (ft_launch_test(t_start));
}
