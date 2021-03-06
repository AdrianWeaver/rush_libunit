/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:10:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 12:21:17 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include "libft_mandatory.h"
#include <stdlib.h>

int	ft_printf_xcapslauncher(void)
{
	int			ret;
	t_test_list	*t_ft_ptf;
	t_test_list	*t_start;

	t_start = ft_test_lst_new("%X mandatory", "%X", &test_X01, NULL);
	t_ft_ptf = t_start;
	t_ft_ptf = ft_test_lst_new("%X mandatory", "%X\\n", &test_X02, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%X mandatory", "toto %X", &test_X03, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%X mandatory", "%%%X", &test_X04, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%X mandatory", "%%%X\\n", &test_X05, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%X mandatory", "%%\\n%X", &test_X06, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%X mandatory", "X\\33%X\\n",
			&test_X07, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new("%X mandatory", "%%X%X", &test_X08, t_ft_ptf);
	ret = ft_launch_test(t_start);
	return (ret);
}
