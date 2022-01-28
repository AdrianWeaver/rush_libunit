/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mandatory.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:20:48 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/28 09:54:40 by aweaver          ###   ########.fr       */
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
# ifndef FT_PRINTF_LAUNCHERS
#  define FT_PRINTF_LAUNCHERS

int	ft_printf_clauncher(void);
int	ft_printf_slauncher(void);
int	ft_printf_plauncher(void);
int	ft_printf_dlauncher(void);
int	ft_printf_ilauncher(void);
int	ft_printf_ulauncher(void);
int	ft_printf_xlauncher(void);
int	ft_printf_xcapslauncher(void);
# endif

# ifndef TEST_M
#  define TEST_M

int	test_c(void);
int	test_s(void);
int	test_p(void);
int	test_d(void);
int	test_i(void);
int	test_u(void);
int	test_x(void);
int	test_X(void);
int	test_percent(void);

# endif

# ifndef TEST_C
#  define TEST_C

int	test_c01(void);
int	test_c02(void);
int	test_c03(void);
int	test_c04(void);
int	test_c05(void);
int	test_c06(void);
int	test_c07(void);
int	test_c08(void);

# endif

# ifndef TEST_X
#  define TEST_X

int	test_x01(void);
int	test_x02(void);
int	test_x03(void);
int	test_x04(void);
int	test_x05(void);
int	test_x06(void);
int	test_x07(void);
int	test_x08(void);
int	test_X01(void);
int	test_X02(void);
int	test_X03(void);
int	test_X04(void);
int	test_X05(void);
int	test_X06(void);
int	test_X07(void);
int	test_X08(void);

# endif

# ifndef TEST_S
#  define TEST_S

int	test_s01(void);
int	test_s02(void);
int	test_s03(void);
int	test_s04(void);
int	test_s05(void);
int	test_s06(void);
int	test_s07(void);
int	test_s08(void);
# endif

# ifndef TEST_U
#  define TEST_U

int	test_u01(void);
int	test_u02(void);
int	test_u03(void);
int	test_u04(void);
int	test_u05(void);
int	test_u06(void);
int	test_u07(void);
int	test_u08(void);

# endif

#endif
