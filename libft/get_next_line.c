/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:11:32 by aweaver           #+#    #+#             */
/*   Updated: 2021/12/09 18:16:12 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5

#endif

int	ft_strlen_custom(char *memory)
{
	int	i;

	i = 0;
	if (*memory == 0)
		return (0);
	while (memory[i] != 0 && memory[i] != '\n')
		i++;
	if (memory[i] == '\n')
		i++;
	return (i);
}

void	*ft_get_end(char *memory)
{
	if (*memory == 0)
		return (memory);
	while (*memory && *memory != '\n')
		memory++;
	if (*memory == '\n')
		return (++memory);
	return (memory);
}

void	*ft_getline(char *memory)
{
	int		i;
	char	*line;

	i = 0;
	line = malloc(sizeof(*line) * ft_strlen_custom(memory) + 1);
	if (line == 0)
		return (0);
	while (memory[i] != '\n' && memory[i] != '\0')
	{
		line[i] = memory[i];
		i++;
	}
	line[i] = memory[i];
	if (line[i] == '\n')
	{
		i++;
		line[i] = 0;
	}
	ft_strcpy(memory, ft_get_end(memory));
	return (line);
}

char	*ft_make_magic(int fd, char *buffer, int bytes_read)
{
	static char	*memory;
	char		*line;

	if (memory == 0)
	{
		memory = malloc(sizeof(*memory) * (1));
		if (memory == 0)
			return (0);
		memory[0] = 0;
	}
	while (bytes_read > 0 && ft_strchr(memory, '\n') == 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if ((bytes_read == -1 || (bytes_read == 0 && *memory == 0)))
		{
			free(buffer);
			free(memory);
			memory = NULL;
			return (0);
		}
		buffer[bytes_read] = 0;
		memory = ft_strjoin(memory, buffer);
	}
	line = ft_getline(memory);
	return (line);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	int			bytes_read;

	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0)
		return (0);
	buffer = malloc(sizeof(buffer) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (0);
	bytes_read = 1;
	line = ft_make_magic(fd, buffer, bytes_read);
	if (line != 0)
		free(buffer);
	return (line);
}

//int	main(void)
//{
	//int		i;
	//int		fd;
	//char	*str;
//
	//i = 0;
	//fd = open("tata.txt", O_RDONLY);
	//printf("%d\n", fd);
	//if (fd == -1)
	//{
		//printf("le fichier n'a pas pu etre ouvert");
		//return (0);
	//}
	//do{
		//str = get_next_line(fd);
		//printf("%s", str);
		//free(str);
		//i++;
	//} while (str);
	//return (0);
//}
