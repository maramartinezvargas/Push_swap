/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 20:33:27 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 14:26:58 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Create a substring from a given string.
 * @param s Original string.
 * @param start Starting index.
 * @param len Maximum length of the substring.
 * @return New string or NULL if allocation fails.
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s) || *s == '\0')
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* #include <stdio.h>

int main(void)
{
	char *s = "Hola mundo insensato!";
	unsigned int start = 7;
	size_t len = 5;
	char *substr = ft_substr(s, start, len);
	if (substr)
	{
		printf("Substring: '%s'\n", substr);
		free(substr);
	}
	else
	{
		printf("Error: Substring is NULL\n");
	}
	return 0;
} */