/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 21:17:27 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:29:51 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Write a character to a file descriptor.
 * @param c Character to write.
 * @param fd File descriptor (e.g. 1 for stdout).
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* #include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int fd;

	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	ft_putchar_fd('A', fd);
	ft_putchar_fd('\n', fd);
	ft_putchar_fd('B', fd);
	close(fd);
	return (0);
} */