/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/02 14:27:29 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/02 14:27:33 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "push_swap.h"

void	p_on_a(t_lst *lst1, t_lst *lst2)
{
	if (lst2 == NULL)
	{
		return ;
	}
	else
		lst_add(&lst1, lst2->next);

	ft_print_color(YELLOW, "pa ", 1);
}

void	p_on_b(t_lst *lst1, t_lst *lst2)
{
	t_lst *tmp;

	tmp = lst1;
	if (lst1 == NULL)
	{
		return ;
	}
	else
	{
		while (tmp && tmp->next)
		{
			tmp = tmp->next;
		}
		ft_new_list(lst2, tmp->data);
		lst_del_last(tmp);
	}
	ft_print_color(YELLOW, "pb ", 1);
}
