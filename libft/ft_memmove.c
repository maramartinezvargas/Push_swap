/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:37:10 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 14:14:20 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Copy memory allowing overlapping regions.
 * @param dst Destination.
 * @param src Source.
 * @param n Number of bytes to copy.
 * @return Pointer to the destination.
 */

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char			*dst_temp;
	const unsigned char		*src_temp;
	size_t					i;

	dst_temp = (unsigned char *)dst;
	src_temp = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (src_temp < dst_temp)
	{
		i = n;
		while (i--)
			dst_temp[i] = src_temp[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst_temp[i] = src_temp[i];
			i++;
		}
	}
	return (dst);
}

/* #include <string.h>
#include <stdio.h>

int main(void)
{
	char	src[] = "Hola mundo insensato!";
	char	dst1[20];
	char	dst2[20];
	size_t	n = 13;

	ft_memmove(dst1, src, n);
	printf("ft_memmove: %s\n", dst1);

	memmove(dst2, src, n);
	printf("memmove: %s\n", dst2);

	return 0;
} */