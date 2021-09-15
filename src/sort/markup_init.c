/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   markup_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 10:53:22 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/15 10:53:42 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void
	ps_sort_bubble_sort(t_elem *elm, int length)
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

t_elem
	*ps_sort_sorted(t_elem *elm, int length)
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