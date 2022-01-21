/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test_ft_printf.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:20:48 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/21 15:57:31 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_FT_PRINTF_H
# define LIBFT_TEST_FT_PRINTF_H

# ifndef FT_PRINTF_LAUNCHER
#  define FT_PRINTF_LAUNCHER

int	ft_printf_launcher(void);

# endif

# ifndef S_LIST_TEST_PRINTF
#  define S_LIST_TEST_PRINTF

typedef struct s_list_test_printf
{
	int		ft_fd;
	int		ptf_fd;
	int		ret_ft;
	int		ret_ptf;
	char	*ft_str;
	char	*ptf_str;
}				t_list_test_printf;

# endif
int	test_c(void);
#endif
