/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 15:43:16 by omimouni          #+#    #+#             */
/*   Updated: 2021/08/30 11:34:06 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*ps_indexing(t_data *dt)
{
	t_elem	*el;
	int		i;

	el = malloc(sizeof(t_elem) * dt->length);
	i = 0;
	while (i < dt->length)
	{
		el[i].id = 0;
		el[i].number =  dt->stack_a.list[i];
		i++;
	}
	// ps_indexing_sort(dt, el);
	return (el);	
}