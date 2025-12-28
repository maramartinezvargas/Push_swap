/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:25:19 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:25:23 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Count the number of digits in an integer.
 * @param n Integer value.
 * @return Number of digits including sign if negative.
 */

static int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

/*
 * @brief Convert an integer to a newly allocated string.
 * @param n Integer value.
 * @return Dynamically allocated string representing the number.
 */

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	long	nbr;

	nbr = n;
	count = ft_count_digits(nbr);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr)
	{
		str[--count] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

/* #include <stdio.h>
int main(void)
{
	int number = -12345;
	char *str = ft_itoa(number);
	if (str)
	{
		printf("%d -> %s\n", number, str);
		free(str);
	}
	return (0);
} */