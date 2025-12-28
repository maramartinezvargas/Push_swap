/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:30:23 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:12:16 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* @brief Check if a character is in a given set.
* @param c Character to check.
* @param str Set of characters.
* @return 1 if found, 0 otherwise.
*/

static	int	ft_in_set(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

/*
 * @brief Trim characters from the beginning and end of a string.
 * @param s1 Original string.
 * @param set Set of characters to remove.
 * @return New trimmed string or NULL if allocation fails.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_in_set(s1[start], set))
		start++;
	if (!s1[start])
		return (ft_strdup(""));
	end = ft_strlen(s1);
	while (end > start && ft_in_set(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char const	*s1 = "       Hola mundo!      ";
	char const	*set = " ";
	char		*dest = ft_strtrim(s1, set);
	if (dest)
	{
		printf("Original: |%s|\n", s1);
		printf("ft_strtrim: |%s|\n", dest);
		free(dest);
	}
	return (0);
} */