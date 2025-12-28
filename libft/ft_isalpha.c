/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 23:18:32 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:26:55 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 @brief Returns 1 if alphabetic.
 */

int	ft_isalpha(int c)
{
	return (ft_is_upper(c) || ft_is_lower(c));
}

/* #include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int	main(void)
{
	printf("ft_isalpha vs isalpha\n");

	printf("ft_isalpha('a') = %d\n", ft_isalpha('a') != 0);
	printf("   isalpha('a') = %d\n", isalpha('a') != 0);
	printf("----------------------\n");

	printf("ft_isalpha('Z') = %d\n", ft_isalpha('Z') != 0);
	printf("   isalpha('Z') = %d\n", isalpha('Z') != 0);
	printf("----------------------\n");

	printf("ft_isalpha('1') = %d\n", ft_isalpha('1') != 0);
	printf("   isalpha('1') = %d\n", isalpha('1') != 0);
	printf("----------------------\n");

	printf("ft_isalpha('@') = %d\n", ft_isalpha('@') != 0);
	printf("   isalpha('@') = %d\n", isalpha('@') != 0);
	printf("----------------------\n");

	printf("ft_isalpha(' ') = %d\n", ft_isalpha(' ') != 0);
	printf("   isalpha(' ') = %d\n", isalpha(' ') != 0);
	printf("----------------------\n");
	return (0);
}
 */