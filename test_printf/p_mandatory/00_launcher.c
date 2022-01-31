/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:10:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/28 11:02:26 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include "libft_mandatory.h"
#include <stdlib.h>

int	ft_printf_plauncher(void)
{
	int			ret;
	t_test_list	*t_ft_ptf;
	t_test_list	*t_start;

	t_start = ft_test_lst_new("%p mandatory", "%p", &test_p01, NULL);
	t_ft_ptf = t_start;
	t_ft_ptf = ft_test_lst_new("%p mandatory", "%p\\n", &test_p02, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%p mandatory", "toto %p", &test_p03, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%p mandatory", "%%%p", &test_p04, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%p mandatory", "%%%p\\n", &test_p05, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%p mandatory", "%%\\n%p", &test_p06, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%p mandatory", "p\\33%p\\n",
			&test_p07, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%p mandatory", "%%p%p", &test_p08, t_ft_ptf);
	ret = ft_launch_test(t_start);
	return (ret);
}
