/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:34:21 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/15 07:41:44 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static double
	get_min(t_arraylist *l, int *index)
{
	double	min;

	*index = 0;
	min = l->list[0];
	while (*index < l->length)
	{
		if (l->list[*index] < min)
			min = l->list[*index];
		*index+=1;
	}
	return (min);
}

void
	ps_sort_five(t_data *dt)
{
	int	index;

	printf("%.f", get_min(&dt->stack_a, &index));
	printf("\n%d", index);
}
