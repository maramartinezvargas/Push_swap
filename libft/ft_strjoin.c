/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:56:55 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:06:08 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Join two strings into a newly allocated one.
 * @param s1 First string.
 * @param s2 Second string.
 * @return New string or NULL if allocation fails.
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

/* #include <stdio.h>
int main(void)
{
	char	*s1 = "Hola, ";
	char	*s2 = "mundo insensato!";
	char	*result;

	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
} */