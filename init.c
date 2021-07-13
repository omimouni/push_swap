/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:44:16 by omimouni          #+#    #+#             */
/*   Updated: 2021/07/13 17:54:19 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_init(char **argv, int argc, t_stack	**a)
{
	double	n;

	while (argc > 1)
	{
		n = atof(argv[--argc]);
		if (n > 2147483647 || n < -2147483648)
			trigger_error(-1);
		ps_stack_push(a, n);
	}
		
}