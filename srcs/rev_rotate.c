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
#include <stdio.h>
#include "push_swap.h"

void	rev_rotate(t_lst **lst)
{
	t_lst *tmp;
	t_lst *hlp;

	tmp = *lst;
	hlp = tmp;
	tmp->next->prev = *lst;
	while ((*lst) && (*lst)->next)
		(*lst) = (*lst)->next;
	hlp->prev = *lst;
	(*lst)->next = hlp;
	hlp->next = NULL; 
	ft_print_color(YELLOW, "rra ", 1);
}