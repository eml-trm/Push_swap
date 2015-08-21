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

void	p_on_a(t_lst **src, t_lst **dst)
{
	t_lst *tmp;

	tmp = *src;
	if (*src == NULL)
	{
		return ;
	}
	else
	{
		while (tmp && tmp->next)
		{
			tmp = tmp->next;
		}
		lst_change(src, dst);
	}
	ft_print_color(YELLOW, "pa ", 1);
}


void	p_on_b(t_lst **src, t_lst **dst)
{
	t_lst *tmp;

	tmp = *src;
	if (*src == NULL)
	{
		return ;
	}
	else
	{
		while (tmp && tmp->next)
		{
			tmp = tmp->next;
		}
		lst_change(src, dst);
	}
	ft_print_color(YELLOW, "pb ", 1);
}