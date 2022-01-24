/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:10:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 12:06:23 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include "libft_mandatory.h"
#include <stdlib.h>

int	ft_printf_slauncher(void)
{
	int			ret;
	t_test_list	*t_ft_ptf;
	t_test_list	*t_start;

	t_start = ft_test_lst_new("%s mandatory", "%s", &test_s01, NULL);
	t_ft_ptf = t_start;
	(void)t_ft_ptf;
	t_ft_ptf = ft_test_lst_new("%s mandatory", "%s\\n", &test_s02, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%s mandatory", "toto %s\\n", &test_s03,
			t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%s mandatory", "%%%s", &test_s04, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%s mandatory", "%%%s\\n", &test_s05, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%s mandatory", "%%\\n%s", &test_s06, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%s mandatory", "s\\33%s\\t",
			&test_s07, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%s mandatory", "%%s%s", &test_s08, t_ft_ptf);
	ret = ft_launch_test(t_start);
	return (ret);
}
