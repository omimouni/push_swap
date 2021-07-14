/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:22:52 by omimouni          #+#    #+#             */
/*   Updated: 2021/07/13 18:44:32 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_action_swap(t_stack **stack)
{
	double	n;
	double	m;

	n = ps_stack_pop(stack);
	m = ps_stack_pop(stack);
	ps_stack_push(stack, n);
	ps_stack_push(stack, m);
}

void	ps_action_push(t_stack **sa, t_stack **sb)
{
	double	n;

	if ((*sb)->size)
	{
		n = ps_stack_pop(sb);
		ps_stack_push(sa, n);
	}
}

void	ps_action_rotate(t_stack **stack)
{
	t_node	*tmp;

	if ((*stack)->size >= 2)
	{
		tmp = malloc(sizeof(t_node));
		tmp->num = ps_stack_pop(stack);
		tmp->next = (*stack)->head;
		(*stack)->head = tmp;
		(*stack)->size += 1;
	}
}

void	ps_action_rrotate(t_stack **stack)
{
	t_node	*tmp;

	if ((*stack)->size >= 2)
	{
		tmp = (*stack)->head;
		(*stack)->head = (*stack)->head->next;
		(*stack)->size -= 1;
		ps_stack_push(stack, tmp->num);
		free(tmp);
	}
}
