/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:18:11 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 14:21:42 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Compare two strings up to n characters.
 * @param s1 First string.
 * @param s2 Second string.
 * @param n Maximum number of characters to compare.
 * @return 0 if equal, or the difference between the first differing chars.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

/* #include <string.h>
#include <stdio.h>

int main(void)
{
	const char *s1 = "Hella, World!";
	const char *s2 = "Hello, World!";
	const char *s3 = "Hello, there!";
	size_t n = 3;

	int result1 = ft_strncmp(s1, s2, n);
	int result2 = strncmp(s1, s2, n);
	printf("ft_strncmp: %d\n", result1);
	printf("strncmp: %d\n", result2);

	result1 = ft_strncmp(s1, s3, n);
	result2 = strncmp(s1, s3, n);
	printf("ft_strncmp: %d\n", result1);
	printf("strncmp: %d\n", result2);

	result1 = ft_strncmp(s1, s3, 7);
	result2 = strncmp(s1, s3, 7);
	printf("ft_strncmp: %d\n", result1);
	printf("strncmp: %d\n", result2);

	return 0;
} */