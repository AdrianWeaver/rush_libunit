/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:10:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 11:54:13 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include "libft_mandatory.h"
#include <stdlib.h>

int	ft_printf_clauncher(void)
{
	int			ret;
	t_test_list	*t_ft_ptf;
	t_test_list	*t_start;

	t_start = ft_test_lst_new("%c mandatory", "%c", &test_c01, NULL);
	t_ft_ptf = t_start;
	(void)t_ft_ptf;
	t_ft_ptf = ft_test_lst_new("%c mandatory", "%c\\n", &test_c02, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%c mandatory", "toto %c\\n", &test_c03,
			t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%c mandatory", "%%%c", &test_c04, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%c mandatory", "%%%c\\n", &test_c05, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%c mandatory", "%%\\n%c", &test_c06, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%c mandatory", "c\\33%c\\t",
			&test_c07, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%c mandatory", "%%c%c", &test_c08, t_ft_ptf);
	ret = ft_launch_test(t_start);
	return (ret);
}
