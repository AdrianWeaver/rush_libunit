/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:16:55 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 17:50:44 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>

# ifndef T_TEST_LIST
#  define T_TEST_LIST

typedef struct s_test_list
{
	char				*routine_name;
	char				*test_name;
	int					(*funct)(void);
	struct s_test_list	*next;
}				t_test_list;

# endif

# ifndef FT_TEST_LST_NEW
#  define FT_TEST_LST_NEW

t_test_list	*ft_test_lst_new(char *routine_name, char *test_name, int (*funct)
				(void), t_test_list *next);
# endif

# ifndef FT_CHECK_RESULT
#  define FT_CHECK_RESULT

void		ft_check_result(int w_status, int *success);

# endif

# ifndef FT_PRINT_RESULT
#  define FT_PRINT_RESULT

void		ft_print_result(int w_result);
# endif

# ifndef FT_PRINT_TEST
#  define FT_PRINT_TEST

void		ft_print_test(t_test_list *lst);

# endif

# ifndef FT_PRINT_TOTAL
#  define FT_PRINT_TOTAL

void		ft_print_total(int success, int total);

# endif

# ifndef EXEC_CHILD
#  define EXEC_CHILD

void		exec_child(t_test_list *lst);
# endif
# ifndef FT_LAUNCH_TEST
#  define FT_LAUNCH_TEST

int			ft_launch_test(t_test_list *lst);
# endif

# ifndef DEL
#  define DEL

void		del(void *content);
# endif

#endif
