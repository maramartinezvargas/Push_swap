/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 17:09:21 by tamamart          #+#    #+#             */
/*   Updated: 2025/12/28 17:51:28 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Comprueba si un string representa un número válido (+/- opcional)
*/
int	is_number(char *str)
{
	int	i;

	i = 0;
	if (!str || !str[0])
		return (0);
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*
** Convierte string a long (para detectar overflow)
*/
long	ft_atol(const char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*
** Añade un nodo al final de la pila
*/
static void	stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (!stack || !new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	last = stack_last(*stack);
	last->next = new;
	new->prev = last;
}

/*
** Crea un nuevo nodo
*/
static t_stack	*new_node(int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

/*
** Parsea argumentos y construye la pila A
*/
int	parse_args(int argc, char **argv, t_stack **a)
{
	int		i;
	long	num;
	t_stack	*node;

	i = 1;
	while (i < argc)
	{
		if (!is_number(argv[i]))
			return (0);
		num = ft_atol(argv[i]);
		if (num < INT_MIN || num > INT_MAX)
			return (0);
		node = new_node((int)num);
		if (!node)
			return (0);
		stack_add_back(a, node);
		i++;
	}
	if (has_duplicates(*a))
		return (0);
	return (1);
}
