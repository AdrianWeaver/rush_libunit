/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipe_stdout.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 09:10:49 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/22 20:58:05 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libunit.h"

int	ft_pipe_stdout(int *pipefd)
{
	int	stdout_save;

	stdout_save = dup(STDOUT_FILENO);
	pipe(pipefd);
	dup2(pipefd[1], STDOUT_FILENO);
	dup2(pipefd[0], STDIN_FILENO);
	close(pipefd[1]);
	return (stdout_save);
}

void	ft_reset_stdout(int	*fd_pipe, int stdout_save)
{
	dup2(stdout_save, STDOUT_FILENO);
	close(fd_pipe[0]);
}

char	*ft_read_fd(int *pipefd, int buffer_size)
{
	char	*buffer;
	int		bytes_read;

	(void)pipefd;
	bytes_read = 1;
	buffer = malloc(sizeof(*buffer) * (buffer_size + 1));
	if (buffer == 0)
		return (0);
	bytes_read = read(pipefd[0], buffer, buffer_size);
	if (bytes_read == -1)
		return (0);
	buffer[bytes_read] = 0;
	return (buffer);
}
//KEEPING THIS TO TRY TO IMPLEMENT A DYNAMIC SOLUTION OF READ
//char	*ft_read_fd(int fd)
//{
	//char	*buffer;
	//int		buffer_size;
	//int		bytes_read;
	//char	*tmp;
	//char	*str;
//
	//buffer_size = 101;
	//bytes_read = 1;
	//buffer = malloc(sizeof(*buffer) * (buffer_size + 1));
	//if (buffer == 0)
		//return (0);
	//tmp = malloc(sizeof(*tmp) * (buffer_size + 1));
	//if (tmp == 0)
		//return (0);
	//*tmp = 0;
	//write(2, "je boucle", 9);
	//while (bytes_read > 0)
	//{
		//bytes_read = read(fd, buffer, buffer_size);
		//if (bytes_read != -1)
		//{
			//buffer[bytes_read] = 0;
			//str = ft_strjoin(tmp, buffer);
			//free(tmp);
			//tmp = str;
		//}
	//}
	//close(fd);
	//free(tmp);
	//free(buffer);
	//return (str);
//}
