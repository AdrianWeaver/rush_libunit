/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mandatory.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:20:48 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 11:44:32 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MANDATORY_H
# define LIBFT_MANDATORY_H

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
	char	ptf_str[1000];
}				t_list_test_printf;

# endif
# ifndef FT_PRINTF_XLAUNCHER
#  define FT_PRINTF_XLAUNCHER

int	ft_printf_xlauncher(void);
# endif
# ifndef FT_PRINTF_XCAPSLAUNCHER
#  define FT_PRINTF_XCAPSLAUNCHER

int	ft_printf_xcapslauncher(void);
# endif
# ifndef TEST_C
#  define TEST_C

int	test_c(void);

# endif

# ifndef TEST_S
#  define TEST_S

int	test_s(void);

# endif

# ifndef TEST_P
#  define TEST_P

int	test_p(void);

# endif

# ifndef TEST_D
#  define TEST_D

int	test_d(void);

# endif

# ifndef TEST_I
#  define TEST_I

int	test_i(void);

# endif

# ifndef TEST_U
#  define TEST_U

int	test_u(void);

# endif

# ifndef TEST_X
#  define TEST_X

int	test_x(void);
int	test_X(void);

# endif

# ifndef TEST_PERCENT
#  define TEST_PERCENT

int	test_percent(void);

# endif

# ifndef TEST_C01
#  define TEST_C01

int	test_c01(void);

# endif

# ifndef TEST_C02
#  define TEST_C02

int	test_c02(void);

# endif

# ifndef TEST_C03
#  define TEST_C03

int	test_c03(void);

# endif

# ifndef TEST_C04
#  define TEST_C04

int	test_c04(void);

# endif

# ifndef TEST_C05
#  define TEST_C05

int	test_c05(void);

# endif

# ifndef TEST_C06
#  define TEST_C06

int	test_c06(void);

# endif

# ifndef TEST_C07
#  define TEST_C07

int	test_c07(void);

# endif

# ifndef TEST_C08
#  define TEST_C08

int	test_c08(void);

# endif

# ifndef FT_PRINTF_CLAUNCHER
#  define FT_PRINTF_CLAUNCHER

int	ft_printf_clauncher(void);

# endif

#endif
