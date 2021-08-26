/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:30:28 by omimouni          #+#    #+#             */
/*   Updated: 2021/08/20 15:20:52 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_arraylist *a)
{
	int	i;
	int	sort;

	i = 0;
	sort = 0;
	while (i < a->length - 1)
	{
		if (a->list[i] < a->list[i + 1])
			sort = 1;
		i++;
	}
	return (sort);
}
