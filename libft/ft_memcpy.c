/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:58:23 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 14:11:27 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Copy a block of memory.
 * @param dst Destination.
 * @param src Source.
 * @param n Number of bytes to copy.
 * @return Pointer to the destination.
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_temp;
	const unsigned char	*src_temp;

	if (!dest && !src)
		return (dest);
	dest_temp = (unsigned char *)dest;
	src_temp = (const unsigned char *)src;
	while (n > 0)
	{
		*dest_temp++ = *src_temp++;
		n--;
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char	str[] = "Hola mundo insensato!";
	char	dest[22];
	
    ft_memcpy(dest, str, 22);

    printf("%s\n", dest);
}
 */
