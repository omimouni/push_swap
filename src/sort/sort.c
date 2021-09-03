/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 08:41:11 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/03 10:53:47 by omimouni         ###   ########.fr       */
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
	t_elem	*elm;
	t_elem	*sorted;
 
	elm = ps_elem_set(dt->length);
	sorted = ps_elem_set(dt->length);

	i = 0;
	while (i < dt->length)
	{
		elm[i].num = dt->stack_a.list[i];
		elm[i].symbol = i;
		i++;
	}

	t_elem	tmp;
	
	i = 0;
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
		i++;
	}
	
	i = 0;
	while (i < dt->length)
	{
		elm[i].index = i;
		printf("number : %.f\nsymbol : %d\nindex  : %d\n\n", elm[i].num, elm[i].symbol, elm[i].index);
		i++;
	}

	i = 0;
	while (i < dt->length)
	{
		sorted[i].num = elm[elm[i].symbol].num;
		sorted[i].index = elm[elm[i].symbol].index;
		i++;
	}

	// i = 0;
	// while (i < dt->length)
	// {
	// 	// elm[i].index = i;
	// 	printf("number : %.f\nsymbol : %d\nindex  : %d\n\n", sorted[i].num,
	// 		sorted[i].symbol, sorted[i].index);
	// 	i++;
	// }
}
