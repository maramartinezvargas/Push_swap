/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 01:10:04 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:35:34 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Check if a character is printable.
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/* #include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    printf("ft_isprint vs isprint:\n");

    printf("ft_isprint(31): %d\n", ft_isprint(31));
    printf("isprint(31): %d\n", isprint(31) != 0);

    printf("ft_isprint(32): %d\n", ft_isprint(32));
    printf("isprint(32): %d\n", isprint(32) != 0);

    printf("ft_isprint(65): %d\n", ft_isprint(65));
    printf("isprint(65): %d\n", isprint(65) != 0);

    printf("ft_isprint(126): %d\n", ft_isprint(126));
    printf("isprint(126): %d\n", isprint(126) != 0);

    printf("ft_isprint(127): %d\n", ft_isprint(127));
    printf("isprint(127): %d\n", isprint(127) != 0);
    
    return 0;
} */