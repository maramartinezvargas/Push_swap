/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 17:10:44 by tamamart          #+#    #+#             */
/*   Updated: 2025/12/28 19:06:57 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	max_bits(t_stack *a)
{
	int	max;
	int	bits;

	max = 0;
	while (a)
	{
		if (a->index > max)
			max = a->index;
		a = a->next;
	}
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void	sort_big(t_stack **a, t_stack **b)
{
	int	i;
	int	j;
	int	size;
	int	bits;

	bits = max_bits(*a);
	i = 0;
	while (i < bits)
	{
		j = 0;
		size = stack_size(*a);
		while (j < size)
		{
			if (((*a)->index >> i) & 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (*b)
			pa(a, b);
		if (is_sorted(*a))
			break ;
		i++;
	}
}
