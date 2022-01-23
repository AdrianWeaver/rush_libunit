/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:16:55 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/23 12:08:03 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>
# include "libft.h"

# ifndef FT_COLOURS
#  define FT_COLOURS
#  define BLACK "\33[0;30m"
#  define RED "\33[0;31m"
#  define GREEN "\33[0;32m"
#  define YELLOW "\33[0;33m"
#  define BLUE "\33[0;34m"
#  define PINK "\33[0;35m"
#  define TEAL "\33[0;36m"
#  define WHITE "\33[0;37m"
#  define BBLACK "\33[1;30m"
#  define BRED "\31[1;31m"
#  define BGREEN "\33[1;32m"
#  define BYELLOW "\33[1;33m"
#  define BBLUE "\33[1;34m"
#  define BPINK "\33[1;35m"
#  define BTEAL "\33[1;36m"
#  define BWHITE "\33[1;37m"
#  define NOCOLOUR "\33[0m"
# endif

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

# ifndef FT_PIPE_STDOUT
#  define FT_PIPE_STDOUT

int			ft_pipe_stdout(int	*pipefd);

# endif
# ifndef FT_RESET_STDOUT
#  define FT_RESET_STDOUT

void		ft_reset_stdout(int *fd_pipe, int stdout_save);

# endif
# ifndef FT_READ_FD
#  define FT_READ_FD

char		*ft_read_fd(int *pipefd, int buffer_size);

# endif
#endif
