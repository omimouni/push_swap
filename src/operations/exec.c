/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:56:50 by omimouni          #+#    #+#             */
/*   Updated: 2021/08/28 11:15:22 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ps_exec_swap(char *s, t_data *dt)
{
	if (!dt->exec)
	{
		if (!strncmp(s, "sa", 2))
		{
			ps_swap(&dt->stack_a);
			dt->exec = 1;
			write(1, "sa\n", 3);
		}
		if (!strncmp(s, "sb", 2))
		{
			ps_swap(&dt->stack_b);
			dt->exec = 1;
			write(1, "sb\n", 3);
		}
		if (!strncmp(s, "ss", 2))
		{
			ps_swap(&dt->stack_a);
			ps_swap(&dt->stack_b);
			dt->exec = 1;
			write(1, "ss\n", 3);
		}
	}
}

static void	ps_exec_push(char *s, t_data *dt)
{
	if (!dt->exec)
	{
		if (!strncmp(s, "pb", 2))
		{
			ps_push(&dt->stack_b, &dt->stack_a);
			dt->exec = 1;
			write(1, "pb\n", 3);
		}
		if (!strncmp(s, "pa", 2))
		{
			ps_push(&dt->stack_a, &dt->stack_b);
			dt->exec = 1;
			write(1, "pa\n", 3);
		}
	}
}

static void	ps_exec_rotate(char *s, t_data *dt)
{
	if (!dt->exec)
	{
		if (!strncmp(s, "ra", 2))
		{
			ps_rotate(&dt->stack_a);
			dt->exec = 1;
			write(1, "ra\n", 3);
		}
		if (!strncmp(s, "rb", 2))
		{
			ps_rotate(&dt->stack_b);
			dt->exec = 1;
			write(1, "rb\n", 3);
		}
		if (!strncmp(s, "rr", 2))
		{
			ps_rotate(&dt->stack_a);
			ps_rotate(&dt->stack_b);
			dt->exec = 1;
			write(1, "rr\n", 3);
		}
	}
}

static void	ps_exec_rrotate(char *s, t_data *dt)
{
	if (!dt->exec)
	{
		if (!strncmp(s, "rra", 3))
		{
			ps_rrotate(&dt->stack_a);
			dt->exec = 1;
			write(1, "rra\n", 4);
		}
		if (!strncmp(s, "rrb", 3))
		{
			ps_rrotate(&dt->stack_b);
			dt->exec = 1;
			write(1, "rrb\n", 4);
		}
		if (!strncmp(s, "rrr", 3))
		{
			ps_rrotate(&dt->stack_a);
			ps_rrotate(&dt->stack_b);
			dt->exec = 1;
			write(1, "rrr\n", 4);
		}
	}
}

void	ps_exec(char *s, t_data *dt)
{
	dt->exec = 0;
	ps_exec_swap(s, dt);
	ps_exec_push(s, dt);
	ps_exec_rrotate(s, dt);
	ps_exec_rotate(s, dt);
}
