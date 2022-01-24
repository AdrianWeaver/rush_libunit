/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_xcapsmandatory.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:54:58 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/24 10:01:26 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_XCAPSMANDATORY_H
# define LIBFT_XCAPSMANDATORY_H

# ifndef FT_PRINTF_XCAPSLAUNCHER
#  define FT_PRINTF_XCAPSLAUNCHER

int	ft_printf_Xlauncher(void);

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
# ifndef TEST_XCAPS01
#  define TEST_XCAPS01

int	test_X01(void);
# endif
# ifndef TEST_XCAPS02
#  define TEST_XCAPS02

int	test_X02(void);
# endif
# ifndef TEST_XCAPS03
#  define TEST_XCAPS03

int	test_X03(void);
# endif
# ifndef TEST_XCAPS04
#  define TEST_XCAPS04

int	test_X04(void);
# endif
# ifndef TEST_XCAPS05
#  define TEST_XCAPS05

int	test_X05(void);
# endif
# ifndef TEST_XCAPS06
#  define TEST_XCAPS06

int	test_X06(void);
# endif
# ifndef TEST_XCAPS07
#  define TEST_XCAPS07

int	test_X07(void);
# endif
# ifndef TEST_XCAPS08
#  define TEST_XCAPS08

int	test_X08(void);
# endif
#endif
