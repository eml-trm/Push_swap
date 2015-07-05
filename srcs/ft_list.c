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
#include <stdio.h> 
#include "push_swap.h"

void	lst_del_last(t_lsta *lst)
{
	t_lsta *tmp;

	printf("ICI");
	if (lst)
	{
		tmp = (lst)->next;
		while (tmp && tmp->next)
			tmp = tmp->next;
		printf("tmp = %d\n", tmp->data);
		free(tmp);
		if (tmp->prev)
			tmp->prev->next = NULL;
		tmp = NULL;
	}
}

void	lst_add(t_lsta **lst1, t_lsta *new)
{
	if (*lst1 == NULL)
		*lst1 = new;
	else
	{
		new->next = (*lst1);
		(*lst1) = new;
	}
}

void	ft_new_list(t_lsta **list, int nb)
{
	t_lsta	*new;
	static 	*last = NULL;
	t_lsta	*tmp;

	new = ft_new_elem(nb);
	if (last)
	{
		last->next = new;
		new->prev = last;
	}
	else
	{
		*list = new;

	}
	last = new;
	/*tmp = *list;
	if (*list == NULL)
		*list = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}*/
	
}

t_lsta	*ft_new_elem(int nb)
{
	t_lsta	*tmp;

	if (!(tmp = (t_lsta *)malloc(sizeof(t_lsta))))
		error_code(1);
	tmp->data = nb;
	tmp->next = NULL;
	tmp->prev = NULL;
	return (tmp);
}
