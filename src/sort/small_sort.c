/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:22:16 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/02 11:42:19 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_sort_small(t_data *dt)
{
	double	*list;

	list = dt->stack_a.list;
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
