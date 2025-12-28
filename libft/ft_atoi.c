/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 17:11:11 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:25:01 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Convert a string to an integer.
 * @param nptr String containing a numeric representation.
 * @return Integer value obtained.
 */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}

/* #include <stdio.h>

int main(void)
{
	const char	*nptr;
	int			result;

	nptr = "9223372036854775811";
	result = ft_atoi(nptr);
	printf("ft_atoi: %d\n", result);
	result = atoi(nptr);
	printf("   atoi: %d\n", result);
	return (0);
}
 */