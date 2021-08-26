/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:25:18 by omimouni          #+#    #+#             */
/*   Updated: 2021/08/20 16:23:53 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_trigger(void)
{
	write(1, "Error\n", 7);
	exit(1);
}

static void	check_dup(double *list, int size)
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

void	ps_error(t_data *dt)
{
	int	i;

	i = 0;
	while (i < dt->stack_a.length)
	{
		if (dt->stack_a.list[i] < -2147483648
			|| dt->stack_a.list[i] > 2147483647)
			ps_trigger();
		i++;
	}
	check_dup(dt->stack_a.list, dt->stack_a.length);
}

void	is_num(int argc, char **argv)
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
