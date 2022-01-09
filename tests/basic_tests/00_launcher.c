/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:10:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 20:50:11 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include "libft_test_basic.h"

int	ft_basic_launcher(void)
{
	t_test_list	*t_basic;
	t_test_list	*t_start;

	t_start = ft_test_lst_new("basic_tests", "theoreticaly_ok_test",
			&ft_ok_test, NULL);
	t_basic = t_start;
	t_basic = ft_test_lst_new("basic_tests", "theoreticaly_ko_test",
			&ft_ko_test, t_basic);
	t_basic = ft_test_lst_new("basic_tests", "theoreticaly segfault",
			&ft_test_segfault, t_basic);
	t_basic = ft_test_lst_new("basic_tests", "theoreticaly bus error",
			&ft_bus_error, t_basic);
	t_basic = ft_test_lst_new("basic_tests", "theoreticaly sigabort",
			&ft_sigabort, t_basic);
	t_basic = ft_test_lst_new("basic_tests", "theoreticaly sigfpe", &ft_sigfpe,
			t_basic);
	t_basic = ft_test_lst_new("basic_tests", "theoreticaly sigill.c",
			&ft_test_sigill, t_basic);
	return (ft_launch_test(t_start));
}
