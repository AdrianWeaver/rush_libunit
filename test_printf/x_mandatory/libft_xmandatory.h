/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_xmandatory.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:20:48 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 11:42:52 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_XMANDATORY_H
# define LIBFT_XMANDATORY_H

# ifndef FT_PRINTF_XLAUNCHER
#  define FT_PRINTF_XLAUNCHER

int	ft_printf_xcapslauncher(void);

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
	char	ptf_str[1000];
}				t_list_test_printf;

# endif
# ifndef TEST_X01
#  define TEST_X01

int	test_x01(void);
# endif
# ifndef TEST_X02
#  define TEST_X02

int	test_x02(void);
# endif
# ifndef TEST_X03
#  define TEST_X03

int	test_x03(void);
# endif
# ifndef TEST_X04
#  define TEST_X04

int	test_x04(void);
# endif
# ifndef TEST_X05
#  define TEST_X05

int	test_x05(void);
# endif
# ifndef TEST_X06
#  define TEST_X06

int	test_x06(void);
# endif
# ifndef TEST_X07
#  define TEST_X07

int	test_x07(void);
# endif
# ifndef TEST_X08
#  define TEST_X08

int	test_x08(void);
# endif
#endif
