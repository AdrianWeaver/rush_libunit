/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:11:35 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 15:25:32 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"
#include "test_ft_atoi.h"

int	ft_launch_test(t_test_list *lst)
{
	int	ret;
	int	nb_test;
	int	success;

	success = 0;
	nb_test = 0;
	ret = 0;
	while (lst)
	{
		if (lst->funct)
		{
			nb_test++;
			if (lst->funct == 0)
				success++;
			else if (lst->funct == -1)
				ret = -1;
			lst = lst->next;
			
		}
	}
}
