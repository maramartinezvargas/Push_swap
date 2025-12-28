/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 20:26:01 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 14:14:44 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Fill a block of memory with a specific byte.
 * @param str Pointer to the memory area.
 * @param c Value to set.
 * @param n Number of bytes to fill.
 * @return Pointer to the modified memory block.
 */

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*str_temp;

	str_temp = (unsigned char *)str;
	while (n > 0)
	{
		*str_temp++ = (unsigned char)c;
		n--;
	}
	return (str);
}

/* #include <stdio.h>

int main(void)
{
	char str[] = "Hola mundo insensato!";
	printf("Antes: %s\n", str);
	ft_memset(str, 'x', 5);
	printf("Después: %s\n", str);
	return 0;
} */