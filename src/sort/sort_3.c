/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:16:24 by omimouni          #+#    #+#             */
/*   Updated: 2021/08/20 15:21:24 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack_three(t_data *dt)
{
	double	*list;

	list = dt->stack_a.list;
	if (list[0] > list[1] && list[0] > list[2] && list[1] < list[2])
		ps_exec("sa", dt);
	if (list[0] < list[1] && list[0] < list[2] && list[1] < list[2])
	{
		ps_exec("sa", dt);
		ps_exec("rra", dt);
	}
	if (list[0] > list[1] && list[0] < list[2] && list[1] < list[2])
		ps_exec("ra", dt);
	if (list[0] < list[1] && list[0] > list[2] && list[1] > list[2])
	{
		ps_exec("sa", dt);
		ps_exec("ra", dt);
	}
	if (list[0] < list[1] && list[0] < list[2] && list[1] > list[2])
		ps_exec("rra", dt);
}
