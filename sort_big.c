/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 17:10:44 by tamamart          #+#    #+#             */
/*   Updated: 2025/12/28 20:36:44 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_to_b(t_stack **a, t_stack **b, int *target, int chunk)
{
	if ((*a)->index <= *target)
	{
		pb(a, b);
		rb(b);
		(*target)++;
	}
	else if ((*a)->index <= *target + chunk)
	{
		pb(a, b);
		(*target)++;
	}
	else
		ra(a);
}

static void	push_chunks(t_stack **a, t_stack **b, int chunk)
{
	int	target;
	int	size;

	target = 0;
	size = stack_size(*a);
	while (target < size)
		push_to_b(a, b, &target, chunk);
}

static int	get_pos(t_stack *s, int index)
{
	int	i;

	i = 0;
	while (s)
	{
		if (s->index == index)
			return (i);
		s = s->next;
		i++;
	}
	return (0);
}

static void	push_back(t_stack **a, t_stack **b)
{
	int	max;
	int	pos;
	int	size;

	while (*b)
	{
		max = stack_max(*b)->index;
		pos = get_pos(*b, max);
		size = stack_size(*b);
		if (pos <= size / 2)
			while ((*b)->index != max)
				rb(b);
		else
			while ((*b)->index != max)
				rrb(b);
		pa(a, b);
	}
}

void	sort_big(t_stack **a, t_stack **b)
{
	int	size;
	int	chunk;

	size = stack_size(*a);
	if (size <= 100)
		chunk = 15;
	else
		chunk = 30;
	push_chunks(a, b, chunk);
	push_back(a, b);
}
