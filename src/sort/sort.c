/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 08:41:11 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/03 11:43:44 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ps_sort_bubble_sort(t_elem *elm, int length)
{
	int		i;
	int		j;
	t_elem	tmp;

	i = 0;
	while (i < length - 1)
	{
		j = 0;
		while (j < length - i - 1)
		{
			if (elm[j].num > elm[j + 1].num)
			{
				tmp.num = elm[j].num;
				tmp.symbol = elm[j].symbol;
				elm[j].num = elm[j + 1].num;
				elm[j].symbol = elm[j + 1].symbol;
				elm[j + 1].num = tmp.num;
				elm[j + 1].symbol = tmp.symbol;
			}
			j++;
		}
		i++;
	}
}

static t_elem	*ps_sort_sorted(t_elem *elm, int length)
{
	int		i;
	t_elem	*srt;

	i = 0;
	srt = malloc(sizeof(t_elem) * length);
	while (i < length)
	{
		srt[elm[i].symbol].num = elm[i].num;
		srt[elm[i].symbol].index = elm[i].index;
		srt[elm[i].symbol].symbol = 0;
		i++;
	}
	free(elm);
	return (srt);
}

void	ps_sort(t_data *dt)
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
}
