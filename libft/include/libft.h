/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 11:20:32 by omimouni          #+#    #+#             */
/*   Updated: 2021/08/28 11:29:34 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

typedef struct s_arraylist
{
	int		length;
	double	*list;
}	t_arraylist;

t_arraylist	ft_arraylist(int length);

void		ft_arraylist_push(double number, t_arraylist *list);
double		ft_arraylist_pop(t_arraylist *list);

#endif