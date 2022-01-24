/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:01:24 by emaugale          #+#    #+#             */
/*   Updated: 2022/01/24 12:28:18 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include "libft_mandatory.h"

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac && ac)
	{
		if (ac == 1 || ft_strcmp(av[i], "bonus") == 0)
		{
			ft_printf_launcher();
			ft_printf_clauncher();
			ft_printf_slauncher();
			ft_printf_xlauncher();
			ft_printf_xcapslauncher();
		}
		else if (ft_strcmp(av[i], "mandatory") == 0)
			ft_printf_launcher();
		else if (ft_strcmp(av[i], "c") == 0)
			ft_printf_clauncher();
		else if (ft_strcmp(av[i], "s") == 0)
			ft_printf_slauncher();
		//else if (ft_strcmp(av[i], "p") == 0)
			//ft_printf_plauncher();
		//else if (ft_strcmp(av[i], "d") == 0)
			//ft_printf_dlauncher();
		//else if (ft_strcmp(av[i], "i") == 0)
			//ft_printf_ilauncher();
		//else if (ft_strcmp(av[i], "u") == 0)
			//ft_printf_ulauncher();
		else if (ft_strcmp(av[i], "x") == 0)
			ft_printf_xlauncher();
		else if (ft_strcmp(av[i], "X") == 0)
			ft_printf_xcapslauncher();
		i++;
	}
	return (0);
}
