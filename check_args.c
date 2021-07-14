/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:30:31 by omimouni          #+#    #+#             */
/*   Updated: 2021/07/13 18:44:17 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	trigger_error(int n)
{
	write(1, "Error\n", 6);
	exit(n);
}

static void	ps_isnum(char *s)
{
	if (*s == '-' || *s == '+')
		s++;
	while (*s)
	{
		if (*s < '0' || *s > '9')
			trigger_error(-1);
		s++;
	}
}

void	ps_check_args(char **argv, int argc)
{
	int		i;

	i = 1;
	while (i < argc)
		ps_isnum(argv[i++]);
}
