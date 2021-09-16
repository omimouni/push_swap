/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 08:41:11 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/16 18:50:00 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_data
	*ps_raddix_init(t_elem *elm, t_data *dt)
{
	t_data	*dt_i;
	int		i;

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

static void
	ps_raddix_sort(t_elem *elm, t_data *dt)
{
	t_data	*dt_i;
	size_t	i;
	int		j;

	dt_i = ps_raddix_init(elm, dt);
	i = 0;
	while (i < (sizeof(double) * 8) && is_sorted(&dt_i->stack_a))
	{
		j = 0;
		while (j < dt->length)
		{
			if (((int)dt_i->stack_a.list[dt_i->stack_a.length - 1] >> i) & 1)
				ps_exec("ra", dt_i);
			else
				ps_exec("pb", dt_i);
			j++;
		}
		while (dt_i->stack_b.length)
			ps_exec("pa", dt_i);
		i++;
	}
	free(dt_i->stack_a.list);
	free(dt_i->stack_b.list);
	free(dt_i);
}

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
	ps_raddix_sort(elm, dt);
	free(elm);
}
