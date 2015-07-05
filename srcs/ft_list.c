/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/28 17:04:00 by etermeau          #+#    #+#             */
/*   Updated: 2015/05/28 17:04:02 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

// t_lst		*elem_circu_create(int nb)
// {
// 	t_lst	*new;

// 	if (!(new = (t_lst *)malloc(sizeof(t_lst))))
// 		error_code(1);
// 	new->data = nb;
// 	new->prev = NULL;
// 	new->next = NULL;
// 	return (new);
// }

void	lst_add(t_lst **list, t_lst *new)
{
	if (*list == NULL)
	{
		*list = new;
		(*list)->prev = *list;
		(*list)->next = *list;
	}
	else
	{
		new->prev = (*list)->prev;
		new->next = *list;
		(*list)->prev->next = new;
		(*list)->prev = new;
	}
}

void	ft_new_list(t_lst **list, int nb)
{
	t_lst	*new;
	t_lst	*tmp;

	new = ft_new_elem(nb);
	tmp = NULL;
	if (*list == NULL)
		*list = new;
	else
	{
		tmp = *list;
		while (tmp && tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	if (new == *list)
		new->prev = NULL;
	else
	{
		tmp->next = new;
		new->prev = tmp;
	}
	new->next = NULL;
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

void	lst_del_last(t_lst *lst)
{
	t_lst *tmp;

	if (lst)
	{
		tmp = (lst)->next;
		while (tmp->next && tmp)
		{
			tmp = tmp->next;
		}
		tmp->data = 0;
		free(tmp);
		tmp->next = NULL;
	}
}
