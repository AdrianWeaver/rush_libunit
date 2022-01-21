/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:16:55 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/21 15:58:27 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>
# include "libft.h"

# ifndef FT_COLORS
#  define COLORS
#  define BLUE "\033[0;34m"
#  define RED "\033[0;31m"
#  define GREEN "\033[0;32m"
#  define NOCOLOUR "\033[m"

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

char		*ft_read_fd(int fd);

# endif
#endif
