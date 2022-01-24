/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:10:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 10:01:00 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include "libft_xmandatory.h"
#include <stdlib.h>

int	ft_printf_xlauncher(void)
{
	int			ret;
	t_test_list	*t_ft_ptf;
	t_test_list	*t_start;

	t_start = ft_test_lst_new(BTEAL "%x mandatory" NOCOLOUR, "%x", &test_x01,
			NULL);
	t_ft_ptf = t_start;
	t_ft_ptf = ft_test_lst_new(TEAL "%x mandatory" NOCOLOUR, "%x\\n",
			&test_x02, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new(TEAL "%x mandatory"NOCOLOUR, "toto %x",
			&test_x03, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new(TEAL "%x mandatory" NOCOLOUR, "%%%x",
			&test_x04, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new(TEAL "%x mandatory" NOCOLOUR, "%%%x\\n",
			&test_x05, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new(TEAL "%x mandatory"NOCOLOUR, "%%\\n%x",
			&test_x06, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new(TEAL "%x mandatory"NOCOLOUR, "x\\33%x\\n",
			&test_x07, t_ft_ptf);
	t_ft_ptf = ft_test_lst_new(TEAL "%x mandatory"NOCOLOUR, "%%x%x", &test_x08,
			t_ft_ptf);
	ret = ft_launch_test(t_start);
	return (ret);
}
