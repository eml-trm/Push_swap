/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 11:42:34 by etermeau          #+#    #+#             */
/*   Updated: 2015/07/21 11:42:35 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_lst **lst)
{
	t_lst *tmp;
	t_lst *hlp;

	tmp = *lst;
	if (*lst == NULL)
		return ;
	else
	{
		if (!(*lst)->next)
			return ;
		while (tmp && tmp->next)
			tmp = tmp->next;
		hlp = tmp;
		tmp->prev->next = NULL;
		hlp->next = *lst;
		*lst = hlp;
		hlp->prev = NULL;
	}
	ft_print_color(YELLOW, "ra ", 1);
}