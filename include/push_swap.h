/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:42:36 by omimouni          #+#    #+#             */
/*   Updated: 2021/08/29 16:06:48 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

typedef struct s_data
{
	t_arraylist	stack_a;
	t_arraylist	stack_b;
	int			length;
	int			exec;
}	t_data;

typedef struct s_elem
{
	double	number;
	int		index;
	int		id;
}	t_elem;

void		ps_error(t_data *dt);
void		is_num(int argc, char **argv);
void		ps_trigger(void);
void		ps_exec(char *s, t_data *dt);

int			is_sorted(t_arraylist *a);

void		ps_swap(t_arraylist *a);
void		ps_rotate(t_arraylist *a);
void		ps_rrotate(t_arraylist *a);
void		ps_push(t_arraylist *a, t_arraylist *b);
void		sort_big(t_data *dt);
t_elem		*ps_indexing(t_data *dt);

#endif
