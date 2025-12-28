/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 21:24:50 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:30:58 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Write a string to a file descriptor.
 * @param s String to write.
 * @param fd Destination descriptor.
 */

void	ft_putstr_fd(char *s, int fd)
{
	int		i;
	char	c;

	i = 0;
	while (s[i] != '\0')
	{
		c = s[i];
		write(fd, &c, 1);
		i++;
	}
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
	ft_putstr_fd(str, fd);
	close(fd);
	return (0);
} */