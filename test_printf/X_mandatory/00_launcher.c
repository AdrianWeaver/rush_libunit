/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:10:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 10:01:14 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include "libft_xcapsmandatory.h"
#include <stdlib.h>

int	ft_printf_Xlauncher(void)
{
	int			ret;
	t_test_list	*t_ft_ptf;
	t_test_list	*t_start;

	t_start = ft_test_lst_new(BTEAL "%X mandatory" NOCOLOUR, "%X", &test_X01,
			NULL);
	t_ft_ptf = t_start;
	t_ft_ptf = ft_test_lst_new(TEAL "%X mandatory" NOCOLOUR, "%X\\n",
			&test_X02, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new(TEAL "%X mandatory"NOCOLOUR, "toto %X",
			&test_X03, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new(TEAL "%X mandatory" NOCOLOUR, "%%%X",
			&test_X04, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new(TEAL "%X mandatory" NOCOLOUR, "%%%X\\n",
			&test_X05, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new(TEAL "%X mandatory"NOCOLOUR, "%%\\n%X",
			&test_X06, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new(TEAL "%X mandatory"NOCOLOUR, "X\\33%X\\n",
			&test_X07, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new(TEAL "%X mandatory"NOCOLOUR, "%%X%X", &test_X08,
			t_ft_ptf);
	ret = ft_launch_test(t_start);
	return (ret);
}
