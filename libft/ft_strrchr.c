/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:19:51 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 14:22:50 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Locate the last occurrence of a character in a string.
 * @param s String to search in.
 * @param c Character to find.
 * @return Pointer to the last occurrence or NULL if not found.
 */

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i + 1 > 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		if (i == 0)
			break ;
		i--;
	}
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
	result1 = ft_strrchr(s, c);
	result2 = strrchr(s, c);
	printf("ft_strrchr: %s\n", result1);
	printf("   strrchr: %s\n", result2);
	c = 'z';
	result1 = ft_strrchr(s, c);
	result2 = strrchr(s, c);
	printf("ft_strrchr: %s\n", result1);
	printf("   strrchr: %s\n", result2);
	c = '\0';
	result1 = ft_strrchr(s, c);
	result2 = strrchr(s, c);
	printf("ft_strrchr: %s\n", result1);
	printf("   strrchr: %s\n", result2);
	return (0);
} */