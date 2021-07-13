/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 01:54:48 by omimouni          #+#    #+#             */
/*   Updated: 2021/07/13 17:54:48 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
*	TODO: Remove atoi, atof and printf 
* 
**/

static void stack_print(t_stack **stack)
{
	double m;

	while ((m = ps_stack_pop(stack)) || (*stack)->size)
		printf("%d\n", (int)m);
}

int main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;

	a = ps_stack_new();
	b = ps_stack_new();
	ps_check_args(argv, argc);
	ps_init(argv, argc, &a);

	printf("Stack a (%ld):\n", a->size);
	stack_print(&a);
	printf("\nStack b (%ld):\n", b->size);
	stack_print(&b);
	// Clean up
	ps_stack_free(&a);
	ps_stack_free(&b);
}
