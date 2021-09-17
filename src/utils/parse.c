/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 07:14:14 by omimouni          #+#    #+#             */
/*   Updated: 2021/09/17 07:59:18 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double
	ps_parse(const char *str)
{
	double	sum;
	int		is_neg;

	sum = 0;
	is_neg = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_neg = -1;
		str++;
	}
	while (*str)
	{
		sum = (sum * 10) + (*str - '0');
		str++;
	}
	return (sum * is_neg);
}
