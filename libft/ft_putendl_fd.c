/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 21:33:08 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:31:10 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Write a string followed by a newline.
 * @param s String to write.
 * @param fd Destination descriptor.
 */

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;
	char	c;

	i = 0;
	while (s[i])
	{
		c = s[i];
		write(fd, &c, 1);
		i++;
	}
	write(fd, "\n", 1);
}

/* #include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int		fd;
	char	*str;

	str = "Hola mundo insensato!";
	fd = open("test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	ft_putendl_fd(str, fd);
	close(fd);
	return (0);
} */