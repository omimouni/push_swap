/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:37:29 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/15 23:41:50 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void
	ps_swap(t_arraylist *a)
{
	double	n;
	double	m;

	if (a->length >= 2)
	{
		n = ft_arraylist_pop(a);
		m = ft_arraylist_pop(a);
		ft_arraylist_push(n, a);
		ft_arraylist_push(m, a);
	}
}

void
	ps_push(t_arraylist *a, t_arraylist *b)
{
	double	n;

	if (b->length)
	{
		n = ft_arraylist_pop(b);
		ft_arraylist_push(n, a);
	}
}

void
	ps_rotate(t_arraylist *a)
{
	double	n;
	int		i;

	n = a->list[a->length - 1];
	i = a->length;
	while (--i > 0)
		a->list[i] = a->list[i - 1];
	a->list[0] = n;
}

void
	ps_rrotate(t_arraylist *a)
{
	double	n;
	int		i;

	n = a->list[0];
	i = 0;
	while (i < a->length - 1)
	{
		a->list[i] = a->list[i + 1];
		i++;
	}
	a->list[a->length - 1] = n;
}
