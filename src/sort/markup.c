/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   markup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 10:53:02 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/16 09:49:50 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void
	ps_markup_symbol(t_data *dt, t_elem *elm)
{
	int	i;

	i = 0;
	while (i < dt->length)
	{
		printf("%.f\tnumber\n%d\tindex\n%d\tstack\n\n",
			elm[i].num, elm[i].index, elm[i].symbol);
		i++;
	}
}
