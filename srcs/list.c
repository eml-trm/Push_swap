/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/28 17:04:00 by etermeau          #+#    #+#             */
/*   Updated: 2015/09/04 15:09:57 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include "push_swap.h"

void	lst_change(t_lst **src, t_lst **dst)
{
	t_lst	*tmp;

	tmp = *src;
	while (tmp && tmp->next)
		tmp = tmp->next;
	if (tmp->prev)
		tmp->prev->next = NULL;
	tmp->prev = NULL;
	lst_add2(dst, tmp);
	if (tmp == (*src))
		*src = NULL;
}

void	lst_add(t_lst **list, t_lst *new)
{
	static t_lst	*last = NULL;
	
	if (last)
	{
		last->next = new;
		new->prev = last;
	}
	else
		*list = new;
	last = new;
}

void	lst_add2(t_lst **list, t_lst *new)
{
	t_lst	*tmp;
	
	tmp = (*list);
	if (tmp)
	{
		while (tmp &&  tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
	else
		*list = new;
	tmp = new;
}

t_lst	*ft_new_elem(int nb)
{
	t_lst	*tmp;

	if (!(tmp = (t_lst *)malloc(sizeof(t_lst))))
		error_code(1);
	tmp->data = nb;
	tmp->next = NULL;
	tmp->prev = NULL;
	return (tmp);
}
