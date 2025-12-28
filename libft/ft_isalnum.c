/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 00:14:18 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:27:45 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @brief Returns 1 if alphanumeric. */

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/* #include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int	main(void)
{
	printf("ft_isalnum vs isalnum\n");
	printf("ft_isalnum('a') = %d\n", ft_isalnum('a') != 0);
	printf("   isalnum('a') = %d\n", isalnum('a') != 0);
	printf("----------------------\n");

	printf("ft_isalnum('Z') = %d\n", ft_isalnum('Z') != 0);
	printf("   isalnum('Z') = %d\n", isalnum('Z') != 0);
	printf("----------------------\n");

	printf("ft_isalnum('5') = %d\n", ft_isalnum('5') != 0);
	printf("   isalnum('5') = %d\n", isalnum('5') != 0);
	printf("----------------------\n");

	printf("ft_isalnum('@') = %d\n", ft_isalnum('@') != 0);
	printf("   isalnum('@') = %d\n", isalnum('@') != 0);
	printf("----------------------\n");

	printf("ft_isalnum(' ') = %d\n", ft_isalnum(' ') != 0);
	printf("   isalnum(' ') = %d\n", isalnum(' ') != 0);
	printf("----------------------\n");
	return (0);
} */