/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 01:58:36 by omimouni          #+#    #+#             */
/*   Updated: 2021/07/10 23:26:49 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	double			num;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	size_t	size;
}	t_stack;

t_node	*ps_list_new(void);
void	ps_list_add(t_node **list, double num);
double	ps_list_remove(t_node	**list);
void	ps_list_free(t_node **list);

t_stack	*ps_stack_new(void);
void	ps_stack_push(t_stack **stack, double num);
double	ps_stack_pop(t_stack **stack);
void	ps_stack_free(t_stack **stack);

#endif
