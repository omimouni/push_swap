/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:42:52 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/17 07:56:41 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void
	init(t_data *dt, int argc, char **argv)
{
	int	i;

	dt->stack_a = ft_arraylist(argc - 1);
	dt->stack_b = ft_arraylist(argc - 1);
	dt->length = argc - 1;
	i = argc;
	while (i > 1)
		ft_arraylist_push(ps_parse(argv[--i]), &(dt->stack_a));
}

static void
	dt_free(t_data	*dt)
{
	free(dt->stack_a.list);
	free(dt->stack_b.list);
}

/**
 * 	TODO: sort small numbers
 *  TODO: Fix 4 digits thing
 *	TODO: General algorithm to sort everything
 */
void
	route(t_data *dt)
{
	if (dt->length == 2)
	{
		if (dt->stack_a.list[1] > dt->stack_a.list[0])
			ps_exec("sa", dt);
	}
	else if (dt->length == 3)
		ps_sort_small(dt);
	else if (dt->length <= 5)
		ps_sort_five(dt);
	else
		ps_sort(dt);
}

/**
 * TODO: Check if args are numbers
 * TODO: Check duplications and overflow int
 * TODO: Check if sorted
 */
int
	main(int argc, char **argv)
{
	t_data		data;

	is_num(argc, argv);
	init(&data, argc, argv);
	ps_error(&data);
	if (is_sorted(&data.stack_a))
		route(&data);
	dt_free(&data);
	return (0);
}
