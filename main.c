/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 01:54:48 by omimouni          #+#    #+#             */
/*   Updated: 2021/07/13 13:16:52 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	stack_print(t_stack	**stack)
{
	double	m;

	while ((m = ps_stack_pop(stack)))
		printf("%.f\n", m);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = ps_stack_new();
	b = ps_stack_new();
	// Push to stack A
	while (argc > 1)
		ps_stack_push(&a, (double)atoi(argv[--argc]));
	ps_action_rrotate(&a);

	// Print stacks at the end
	printf("Stack a (%ld):\n", a->size);
	stack_print(&a);
	printf("\nStack b (%ld):\n", b->size);
	stack_print(&b);
}
