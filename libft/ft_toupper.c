/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 02:02:41 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:45:18 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* @brief Convert a lowercase letter to uppercase.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    printf("ft_toupper vs toupper:\n");

    printf("ft_toupper('a'): %c\n", ft_toupper('a'));
    printf("toupper('a'): %c\n", toupper('a'));

    printf("ft_toupper('z'): %c\n", ft_toupper('z'));
    printf("toupper('z'): %c\n", toupper('z'));

    printf("ft_toupper('A'): %c\n", ft_toupper('A'));
    printf("toupper('A'): %c\n", toupper('A'));

    printf("ft_toupper('Z'): %c\n", ft_toupper('Z'));
    printf("toupper('Z'): %c\n", toupper('Z'));

    printf("ft_toupper('0'): %c\n", ft_toupper('0'));
    printf("toupper('0'): %c\n", toupper('0'));

    printf("ft_toupper('@'): %c\n", ft_toupper('%));
    printf("toupper('@'): %c\n", toupper('%'));

    return 0;
} */