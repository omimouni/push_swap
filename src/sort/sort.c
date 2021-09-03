/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 08:41:11 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/03 09:04:59 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*ps_elem_set(int length)
{
	t_elem	*elm;

	elm = malloc(sizeof(t_elem) * length);
	return (elm);
}

void	ps_sort(t_data *dt)
{
	int	i;
	int	j;
	// double	min;
	t_elem	*elm;

	elm = ps_elem_set(dt->length);
	printf("\n");

	i = 0;
	t_elem	tmp;
	while (i < dt->length - 1)
	{
		j = 0;
		while (j < dt->length - i - 1)
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
		printf("\n");
		i++;
	}

	i = 0;
	while (i < dt->length)
	{
		elm[i].num = dt->stack_a.list[i];
		elm[i].symbol = i;
		printf("number : %.f\nsymbol : %d\n\n", elm[i].num, elm[i].symbol);
		i++;
	}
}
