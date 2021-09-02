/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:05:15 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/02 11:50:29 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_trigger(void)
{
	write(1, "Error\n", 7);
	exit(1);
}

void	ps_error(t_data *dt)
{
	int	i;

	i = 0;
	while (i < dt->stack_a.length)
	{
		if (dt->stack_a.list[i] < FT_INT_MIN
			|| dt->stack_a.list[i] > FT_INT_MAX)
			ps_trigger();
		i++;
	}
	check_dup(dt->stack_a.list, dt->stack_a.length);
}
