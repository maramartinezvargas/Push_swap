/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:33:17 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 14:20:00 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Concatenate strings with a size limit.
 * @param dst Destination buffer.
 * @param src Source string.
 * @param dstsize Total size of the destination buffer.
 * @return Combined length of src and the initial dst.
 */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] != '\0' && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char dest1[20] = "Hola ";
	char dest2[20] = "Hola ";
	size_t result1;
	size_t result2;

	result1 = ft_strlcat(dest1, "que tal", 15);
	result2 = strlcat(dest2, "que tal", 15);
	printf("ft_strlcat: %s - return: %zu\n", dest1, result1);
	printf("strlcat:    %s - return: %zu\n", dest2, result2);
	return (0);
}  */