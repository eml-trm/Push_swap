/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/28 16:03:11 by etermeau          #+#    #+#             */
/*   Updated: 2015/05/28 16:03:12 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_on_a(t_lsta **lst)
{
	t_lsta *tmp;
	int swap;
	
	tmp = *lst;
	while (tmp && tmp->next)
		tmp = tmp->next;
	swap = tmp->data;
	tmp->data = tmp->prev->data;
	tmp->prev->data = swap;

	ft_print_color(YELLOW, "sa ", 1);
}

void	s_on_b(t_lsta **lst)
{
	t_lsta *tmp;
	t_lsta *swap;
	
	tmp = *lst;
	while (tmp && tmp->next)
		tmp = tmp->next;
	swap = tmp;
	tmp = tmp->next;
	tmp->next = swap;

	ft_print_color(YELLOW, "sb ", 1);
}

// void	s_on_ab(t_lsta **lst1, t_lsta **lst2)
// {
// 	s_on_a(&lst1, &lst1->next);
// 	s_on_b(&lst2, &lst2->next);
// 	ft_print_color(YELLOW, "ss ", 1);
// }