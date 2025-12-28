/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_lower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:48:30 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:26:14 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
@brief Returns 1 if ASCII lowercase. 
*/

int	ft_is_lower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/* #include <stdio.h>

int	main(void)
{
	int	c;

	c = 'a';
	printf("'%c' = %d\n", c, ft_is_lower(c));
	c = 'Z';
	printf("'%c' = %d\n", c, ft_is_lower(c));
	c = '1';
	printf("'%c' = %d\n", c, ft_is_lower(c));
	c = '#';
	printf("'%c' = %d\n", c, ft_is_lower(c));
	return (0);
} */