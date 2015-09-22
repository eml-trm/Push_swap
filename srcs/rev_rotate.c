/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 15:47:36 by etermeau          #+#    #+#             */
/*   Updated: 2015/07/21 15:47:39 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_lst **lst)
{
	t_lst	*tmp;
	t_lst	*hlp;

	tmp = *lst;
	if (tmp->name == 'a')
		ft_print_color(YELLOW, "rra ", 1);
	else
		ft_print_color(YELLOW, "rrb ", 1);
	if (*lst)
	{
		hlp = tmp->next;
		tmp->next = NULL;
		if (!hlp)
			return ;
		hlp->prev = NULL;
		*lst = hlp;
		while (hlp && hlp->next)
			hlp = hlp->next;
		hlp->next = tmp;
		tmp->prev = hlp;
	}
}
