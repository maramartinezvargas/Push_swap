/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 13:14:43 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 14:15:02 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Compare two memory blocks.
 * @param s1 First block.
 * @param s2 Second block.
 * @param n Number of bytes to compare.
 * @return 0 if equal, or the difference between the first differing bytes.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
/* 
#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("ft_memcmp: %d\n", ft_memcmp("holX", "holb", 4));
	printf("memcmp: %d\n", memcmp("holX", "holb", 4));
	return 0;
} */