/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 01:54:48 by omimouni          #+#    #+#             */
/*   Updated: 2021/07/10 16:11:45 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	a = ps_list_new();
	ps_list_add(&a, 10);
	ps_list_add(&a, 11);
	ps_list_add(&a, 12);
	ps_list_remove(&a);
	ps_list_remove(&a);
	ps_list_remove(&a);
	ps_list_remove(&a);
	ps_list_remove(&a);
	
	b = a;
	while (a != NULL)
	{
		printf("%.f\n", a->num);
		a = a->next;
	}
	ps_list_free(&b);
	return (0);
}