/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:10:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 08:07:36 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include "libft_mandatory.h"
#include <stdlib.h>

int	ft_printf_launcher(void)
{
	int			ret;
	t_test_list	*t_ft_ptf;
	t_test_list	*t_start;

	t_start = ft_test_lst_new("ft_printf", "%c", &test_c, NULL);
	t_ft_ptf = t_start;
	(void)t_ft_ptf;
	t_ft_ptf = ft_test_lst_new("ft_printf", "%s", &test_s, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("ft_printf", "%p", &test_p, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("ft_printf", "%d", &test_d, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("ft_printf", "%i", &test_i, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("ft_printf", "%u", &test_u, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("ft_printf", "%x", &test_x, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("ft_printf", "%X", &test_X, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("ft_printf", "%%", &test_percent, t_ft_ptf);
	ret = ft_launch_test(t_start);
	return (ret);
}
