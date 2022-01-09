/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test_basic.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:16:45 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/09 21:29:44 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_BASIC_H
# define LIBFT_TEST_BASIC_H

int	ft_basic_launcher(void);
int	ft_ok_test(void);
int	ft_ko_test(void);
int	ft_test_segfault(void);
int	ft_test_bus_error(void);
int	ft_test_sigabort(void);
int	ft_test_sigfpe(void);
int	ft_test_sigill(void);

#endif
