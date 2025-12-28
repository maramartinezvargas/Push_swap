/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 02:11:18 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:45:09 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* @brief Convert an uppercase letter to lowercase.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    printf("ft_tolower vs tolower:\n");

    printf("ft_tolower('a'): %c\n", ft_tolower('a'));
    printf("tolower('a'): %c\n", tolower('a'));

    printf("ft_tolower('z'): %c\n", ft_tolower('z'));
    printf("tolower('z'): %c\n", tolower('z'));

    printf("ft_tolower('A'): %c\n", ft_tolower('A'));
    printf("tolower('A'): %c\n", tolower('A'));

    printf("ft_tolower('Z'): %c\n", ft_tolower('Z'));
    printf("tolower('Z'): %c\n", tolower('Z'));

    printf("ft_tolower('0'): %c\n", ft_tolower('4'));
    printf("tolower('0'): %c\n", tolower('4'));

    printf("ft_tolower('@'): %c\n", ft_tolower('%'));
    printf("tolower('@'): %c\n", tolower('%'));

    return 0;
} */