/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:34:21 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/15 10:01:54 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int
	ps_min_index(t_arraylist *l, int *pos)
{
	int		i;
	double	min;
	int		ind;

	i = 0;
	ind = 0;
	min = l->list[0];
	while (i < l->length)
	{
		if (l->list[i] < min)
		{
			min = l->list[i];
			ind = i;
		}
		i++;
	}
	*pos = ind;
	return (l->length - ind - 1);
}

static void
	ps_rotate_custom(int length, int index, t_data *dt)
{
	if (index > (length / 2 - 1))
		ps_exec("ra", dt);
	else
		ps_exec("rra", dt);
}

void
	ps_sort_five(t_data *dt)
{
	int	i;

	while (ps_min_index(&dt->stack_a, &i))
		ps_rotate_custom(dt->length, i, dt);
	ps_exec("pb", dt);
	while (ps_min_index(&dt->stack_a, &i))
		ps_rotate_custom(dt->length, i, dt);
	ps_exec("pb", dt);
	if (dt->stack_b.list[1] < dt->stack_b.list[0])
		ps_exec("sb", dt);
	ps_sort_small(dt);
	ps_exec("pa", dt);
	ps_exec("pa", dt);
}
