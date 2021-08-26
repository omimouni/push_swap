/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:42:36 by omimouni          #+#    #+#             */
/*   Updated: 2021/08/21 11:42:46 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>


typedef struct s_arraylist
{
	int		length;
	double	*list;
}	t_arraylist;

typedef struct s_data
{
	t_arraylist	stack_a;
	t_arraylist	stack_b;
	int			length;
	int			exec;
}	t_data;

t_arraylist	ft_arraylist(int length);

void		ft_arraylist_push(double number, t_arraylist *list);
double		ft_arraylist_pop(t_arraylist *list);
void		ps_error(t_data *dt);
void		is_num(int argc, char **argv);
void		ps_trigger(void);
void		ps_exec(char *s, t_data *dt);

int			is_sorted(t_arraylist *a);

void		ps_swap(t_arraylist *a);
void		ps_rotate(t_arraylist *a);
void		ps_rrotate(t_arraylist *a);
void		ps_push(t_arraylist *a, t_arraylist *b);

void		sort_stack_three(t_data *dt);
void		sort_stack_five(t_data *data);

void		sort_big(t_data *dt);
#endif
