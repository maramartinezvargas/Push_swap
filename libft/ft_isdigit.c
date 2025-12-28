/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 00:05:51 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:27:19 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @brief Returns 1 if numeric. */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/* #include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main(void)
{
    printf("ft_isdigit vs isdigit\n");

    printf("ft_isdigit('0') = %d\n", ft_isdigit('0') != 0);
    printf("   isdigit('0') = %d\n", isdigit('0') != 0);
    printf("----------------------\n");

    printf("ft_isdigit('5') = %d\n", ft_isdigit('5') != 0);
    printf("   isdigit('5') = %d\n", isdigit('5') != 0);
    printf("----------------------\n");

    printf("ft_isdigit('9') = %d\n", ft_isdigit('9') != 0);
    printf("   isdigit('9') = %d\n", isdigit('9') != 0);
    printf("----------------------\n");

    printf("ft_isdigit('a') = %d\n", ft_isdigit('a') != 0);
    printf("   isdigit('a') = %d\n", isdigit('a') != 0);
    printf("----------------------\n");

    printf("ft_isdigit('@') = %d\n", ft_isdigit('@') != 0);
    printf("   isdigit('@') = %d\n", isdigit('@') != 0);
    printf("----------------------\n");

    return (0);
} */