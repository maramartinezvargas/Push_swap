/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 02:24:55 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 14:15:22 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Calculate the length of a string.
 * @param s String to measure.
 * @return Number of characters excluding the null terminator.
 */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
	const char *str = "Hola, mundo!dfgdfgdfgdwsetw";
	printf("ft_strlen: %zu\n", ft_strlen(str));
	printf("strlen: %zu\n", strlen(str));
	return 0;
} */