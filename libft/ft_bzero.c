/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 20:23:46 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 12:46:00 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Fill a block of memory with zeros.
 * @param s Pointer to the memory area to modify.
 * @param n Number of bytes to set to zero.
 */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* #include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hola que tal";
	char	str2[] = "Hola que tal";

	printf("Antes de bzero:\nstr1: %s\nstr2: %s\n", str1, str2);
	bzero(str1 + 5, 3);
	ft_bzero(str2 + 5, 3);
	printf("Después de bzero:\nstr1: %s\nstr2: %s\n", str1, str2);
	return (0);
} */