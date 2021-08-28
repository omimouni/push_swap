/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 21:30:58 by omimouni          #+#    #+#             */
/*   Updated: 2021/08/28 11:18:32 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_arraylist	ft_arraylist(int length)
{
	t_arraylist	list;

	list.length = 0;
	list.list = malloc(sizeof(double) * length);
	return (list);
}

void	ft_arraylist_push(double number, t_arraylist *list)
{
	list->list[list->length] = number;
	list->length += 1;
}

double	ft_arraylist_pop(t_arraylist *list)
{
	double	number;

	number = -1;
	if (list->length != 0)
	{
		number = list->list[list->length - 1];
		list->length -= 1;
	}
	return (number);
}
