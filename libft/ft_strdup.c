/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 19:27:39 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 14:22:12 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Duplicate a string in dynamically allocated memory.
 * @param s Original string.
 * @return Pointer to the new string or NULL if allocation fails.
 */

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;
	int		i;

	len = ft_strlen(s);
	str = malloc (sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* #include <stdio.h>
int main(void)
{
	const char	*original = "Hola, mundo insensato!";
	char *copy	= ft_strdup(original);

	if (copy != NULL)
	{
		printf("Original: %s\n", original);
		printf("Copia: %s\n", copy);
		free(copy);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
} */