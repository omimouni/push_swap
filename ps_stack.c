/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:19:01 by omimouni          #+#    #+#             */
/*   Updated: 2021/07/10 23:26:05 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ps_stack_new(void)
{
	t_stack	*stk;

	stk = malloc(sizeof(t_stack));
	stk->head = ps_list_new();
	stk->size = 0;
	return (stk);
}

void	ps_stack_push(t_stack **stack, double num)
{
	ps_list_add(&(*stack)->head, num);
	(*stack)->size += 1;
}

double	ps_stack_pop(t_stack **stack)
{
	if ((*stack)->size)
	{
		(*stack)->size -= 1;
		return (ps_list_remove(&(*stack)->head));
	}
	return (0);
}

void	ps_stack_free(t_stack **stack)
{
	ps_list_free(&(*stack)->head);
	free(*stack);
}
