/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:10:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/28 09:53:09 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include "libft_mandatory.h"
#include <stdlib.h>

int	ft_printf_ulauncher(void)
{
	int			ret;
	t_test_list	*t_ft_ptf;
	t_test_list	*t_start;

	t_start = ft_test_lst_new("%u mandatory", "%u", &test_u01, NULL);
	t_ft_ptf = t_start;
	t_ft_ptf = ft_test_lst_new("%u mandatory", "%u\\n", &test_u02, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%u mandatory", "toto %u", &test_u03, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%u mandatory", "%%%u", &test_u04, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%u mandatory", "%%%u\\n", &test_u05, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%u mandatory", "%%\\n%u", &test_u06, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%u mandatory", "u\\33%u\\n",
			&test_u07, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%x mandatory", "%%u%u", &test_u08, t_ft_ptf);
	ret = ft_launch_test(t_start);
	return (ret);
}
