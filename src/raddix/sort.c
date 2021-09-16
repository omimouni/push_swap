/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 08:41:11 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/16 15:51:47 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_data
	*ps_raddix_init(t_elem *elm, t_data *dt)
{
	t_data	*dt_i;
	int	i;

	dt_i = malloc(sizeof(t_data));
	dt_i->length = dt->length;
	dt_i->exec = 0;
	dt_i->stack_a = ft_arraylist(dt->length);
	dt_i->stack_b = ft_arraylist(dt->length);
	i = 0;
	while (i < dt->length)
		ft_arraylist_push((double)elm[i++].index, &dt_i->stack_a);
	return (dt_i);
}

void
	ps_sort(t_data *dt)
{
	int		i;
	t_elem	*elm;
	t_data	*dt_i;

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
	dt_i = ps_raddix_init(elm, dt);

	i = 0;
	while (i < dt_i->length)
	{
		printf("%.f\n", dt_i->stack_a.list[i]);
		i++;
	}
	free(elm);
	free(dt_i);
}
