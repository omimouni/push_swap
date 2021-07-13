/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 01:54:48 by omimouni          #+#    #+#             */
/*   Updated: 2021/07/13 13:19:10 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init(t_stack	**stack)
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
	while (argc > 1)
		ps_stack_push(&a, (double)atoi(argv[--argc]));
	ps_action_rrotate(&a);
	printf("Stack a (%ld):\n", a->size);
	stack_print(&a);
	printf("\nStack b (%ld):\n", b->size);
	stack_print(&b);
}
