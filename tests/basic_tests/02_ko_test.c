/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ko_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:52:20 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 22:19:25 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_broken_strlen(char *str)
{
	int	i;

	i = 1;
	while (*str++)
	{
		i++;
	}
	return (i);
}

int	ft_ko_test(void)
{
	if (ft_broken_strlen("abc") == 3)
		return (0);
	else
		return (-1);
}
