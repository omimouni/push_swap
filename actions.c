/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:22:52 by omimouni          #+#    #+#             */
/*   Updated: 2021/07/13 12:32:14 by omimouni         ###   ########.fr       */
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