/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 21:43:20 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:31:21 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Write an integer to a file descriptor.
 * @param n Number to write.
 * @param fd Destination descriptor.
 */

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

/* #include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int		fd;

	fd = open("test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	ft_putnbr_fd(-2147483648, fd);
	ft_putnbr_fd(42, fd);
	ft_putnbr_fd(-42, fd);
	ft_putnbr_fd(0, fd);
	close(fd);
	return (0);
} */