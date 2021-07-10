/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:50:17 by omimouni          #+#    #+#             */
/*   Updated: 2021/07/10 16:11:13 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ps_list_new()
{
	return (NULL);
}

void	ps_list_add(t_node **list, double num)
{
	t_node	*curr;
	t_node	*node;

	node = malloc(sizeof(t_node));
	node->num = num;
	node->next = NULL;
	curr = *list;
	if (curr == NULL)
		*list = node;
	else
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = node;
	}
}

double	ps_list_remove(t_node	**list)
{
	t_node	*curr;
	double	n;
	t_node	*tmp;

	curr = *list;
	if (curr == NULL)
		return (0);
	if (curr->next == NULL)
	{
		tmp = curr;
		n = curr->num;
		*list = ps_list_new();
		free(tmp);
		return (n);
	}
	while (curr->next->next != NULL)
		curr = curr->next;
	tmp = curr->next;
	n = tmp->num;
	curr->next = NULL;
	free(tmp);
	return (n);
}

void	ps_list_free(t_node **list)
{
	t_node	*curr;
	t_node	*tmp;

	curr = *list;
	while (curr != NULL)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
}