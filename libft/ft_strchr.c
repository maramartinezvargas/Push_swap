/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:19:39 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 14:22:34 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Locate the first occurrence of a character in a string.
 * @param s String to search in.
 * @param c Character to find.
 * @return Pointer to the located character or NULL if not found.
 */

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	*s = "Hola mundo insensato!";
	int			c;
	char		*result1;
	char		*result2;

	c = 'a';
	result1 = ft_strchr(s, c);
	result2 = strchr(s, c);
	printf("ft_strchr: %s\n", result1);
	printf("strchr: %s\n", result2);

	c = 'b';
	result1 = ft_strchr(s, c);
	result2 = strchr(s, c);
	printf("ft_strchr: %s\n", result1);
	printf("strchr: %s\n", result2);

	c = '\0';
	result1 = ft_strchr(s, c);
	result2 = strchr(s, c);
	printf("ft_strchr: %s\n", result1);
	printf("strchr: %s\n", result2);

	return (0);
} */