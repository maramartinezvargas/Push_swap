/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 17:09:14 by tamamart          #+#    #+#             */
/*   Updated: 2025/12/28 19:00:07 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Main
Solo debe:

1. Inicializar pila A y pila B
2. Parsear y validar los argumentos de entrada
3. Comprobar si la pila A ya está ordenada
4. Si hay error -> imprime "Error" y sale
5. Si ya está ordenada -> libera memoria y sale. No imprime nada
6. Asignar índices a los elementos de la pila A
7. Se decide el método de ordenación según el tamaño de la pila A
- Hasta 5 elementos -> sort_small
- Más de 5 elementos -> sort_big
8. Liberar memoria y salir */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	if (!parse_args(argc, argv, &a))
		error_exit();
	if (is_sorted(a))
	{
		free_stack(&a);
		return (0);
	}
	assign_index(a);
	if (stack_size(a) <= 5)
		sort_small(&a, &b);
	else
		sort_big(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
