/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 08:41:11 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/16 09:47:09 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void
	ps_sort(t_data *dt)
{
	int		i;
	t_elem	*elm;

	i = 0;
	elm = malloc(sizeof(t_elem) * dt->length);
	while (i < dt->length)
	{
		elm[i].num = dt->stack_a.list[i];
		elm[i].symbol = i;
		i++;
	}
	ps_sort_bubble_sort(elm, dt->length);
	i = 0;
	while (i < dt->length)
	{
		elm[i].index = i;
		i++;
	}
	elm = ps_sort_sorted(elm, dt->length);
	ps_markup_symbol(dt, elm);
}
