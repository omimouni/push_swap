/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 08:41:11 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/03 08:51:18 by omimouni         ###   ########.fr       */
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
	t_elem	*elm;

	elm = ps_elem_set(dt->length);
	printf("\n");
	i = 0;
	while (i < dt->length)
	{
		elm[i].num = dt->stack_a.list[i];
		elm[i].index = i;
		printf("number : %.f\nindex  : %d\n\n", elm[i].num, elm[i].index);
		i++;
	}
}
