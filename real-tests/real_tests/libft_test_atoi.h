/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test_atoi.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:20:48 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 18:56:27 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_ATOI_H
# define LIBFT_TEST_ATOI_H

# ifndef FT_ATOI_LAUNCHER
#  define FT_ATOI_LAUNCHER

int	ft_atoi_launcher(void);

# endif

# ifndef TEST_ODD_VALUES
#  define TEST_ODD_VALUES

int	test_odd_values(void);
# endif

# ifndef TEST_EVEN_VALUES
#  define TEST_EVEN_VALUES

int	test_even_values(void);
# endif

# ifndef TEST_ZERO
#  define TEST_ZERO

int	test_zero(void);
# endif

# ifndef TEST_MINUS_ZERO
#  define TEST_MINUS_ZERO

int	test_minus_zero(void);
# endif

# ifndef TEST_INT_MAX
#  define TEST_INT_MAX

int	test_int_max(void);
# endif

# ifndef TEST_INT_MIN
#  define TEST_INT_MIN

int	test_int_min(void);
# endif

# ifndef TEST_NOT_DIGIT
#  define TEST_NOT_DIGIT

int	test_not_digit(void);
# endif

# ifndef TEST_NOT_PRINTABLE
#  define TEST_NOT_PRINTABLE

int	test_not_printable(void);
# endif

# ifndef TEST_BIGGER_THAN_INT_MAX
#  define TEST_BIGGER_THAN_INT_MAX

int	test_bigger_than_int_max(void);
int	test_bigger_than_int_max2(void);
int	test_bigger_than_int_max3(void);
# endif

# ifndef TEST_WHITESPACE
#  define TEST_WHITESPACE

int	test_whitespace(void);
# endif

# ifndef TEST_WHITESPACE_NUMBER
#  define TEST_WHITESPACE_NUMBER

int	test_whitespace_number(void);
# endif

# ifndef TEST_WHITESPACE_NOT_DIGIT
#  define TEST_WHITESPACE_NOT_DIGIT

int	test_whitespace_not_digit(void);
# endif

# ifndef TEST_WHITESPACE_NEGATIVE_VALUE
#  define TEST_WHITESPACE_NEGATIVE_VALUE

int	test_whitespace_negative_value(void);
# endif

# ifndef TEST_WHITESPACE_ALTERNATIVE
#  define TEST_WHITESPACE_ALTERNATIVE

int	test_whitespace_alternative(void);
# endif

# ifndef TEST_WHITESPACE_ALTERNATIVE2
#  define TEST_WHITESPACE_ALTERNATIVE2

int	test_whitespace_alternative2(void);
# endif

# ifndef TEST_WHITESPACE_INCORRECT
#  define TEST_WHITESPACE_INCORRECT

int	test_whitespace_incorrect(void);
# endif

#endif
