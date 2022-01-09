/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_lst_new.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:56:52 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 17:58:08 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "libunit.h"

t_test_list	*ft_test_lst_new(char *routine_name, char *test_name, int (*funct)
		(void), t_test_list *prev)
{
	t_test_list	*ret;

	ret = malloc(sizeof(*ret) * 1);
	if (ret == 0)
		return (0);
	ret->routine_name = routine_name;
	ret->test_name = test_name;
	ret->funct = funct;
	ret->next = 0;
	if (prev != 0)
		prev->next = ret;
	return (ret);
}
