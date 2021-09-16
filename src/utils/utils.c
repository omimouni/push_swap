/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:25:18 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/16 17:19:05 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void
	check_dup(double *list, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (list[i] == list[j])
				ps_trigger();
			j++;
		}
		i++;
	}
}

void
	is_num(int argc, char **argv)
{
	int	i;

	while (--argc)
	{
		i = 0;
		if (argv[argc][i] == '-' || argv[argc][i] == '+')
			i++;
		while (argv[argc][i])
		{
			if (argv[argc][i] < '0' || argv[argc][i] > '9')
				ps_trigger();
			i++;
		}
	}
}

int
	is_sorted(t_arraylist *a)
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
