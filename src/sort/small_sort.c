/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:22:16 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/02 11:48:41 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ps_sort_small_3(t_data *dt, double *list)
{
	if (list[0] > list[1] && list[1] < list[2] && list[2] < list[0])
		ps_exec("sa", dt);
	else if (list[0] < list[1] && list[1] < list[2] && list[2] > list[0])
	{
		ps_exec("sa", dt);
		ps_exec("rra", dt);
	}
	else if (list[0] > list[1] && list[1] < list[2] && list[2] > list[0])
		ps_exec("ra", dt);
	else if (list[0] < list[1] && list[1] > list[2] && list[2] < list[0])
	{
		ps_exec("sa", dt);
		ps_exec("ra", dt);
	}
	else if (list[0] < list[1] && list[1] > list[2] && list[2] > list[0])
		ps_exec("rra", dt);
}

void	ps_sort_small(t_data *dt)
{
	if (dt->length == 3)
		ps_sort_small_3(dt, dt->stack_a.list);
	if (dt->length == 5)
	{
		ps_exec("pb", dt);
		ps_exec("pb", dt);
		ps_sort_small_3(dt, dt->stack_a.list);
		ps_exec("pa", dt);
		ps_exec("ra", dt);
		ps_exec("pa", dt);
	}
}
