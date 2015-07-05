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

void	s_on_a(t_lst *elem1, t_lst *elem2)
{
	t_lst *tmp1;
	t_lst *tmp2;

	tmp1 = elem1;
	tmp2 = elem2->next;

	elem1 = elem2;
	elem2 = tmp1;

	elem1->next = elem2;
	elem2->next = tmp2;
	ft_print_color(YELLOW, "sa ", 1);
}

void	s_on_b(t_lst *elem1, t_lst *elem2)
{
	t_lst *tmp1;
	t_lst *tmp2;

	tmp1 = elem1;
	tmp2 = elem2->next;

	elem1 = elem2;
	elem2 = tmp1;

	elem1->next = elem2;
	elem2->next = tmp2;
	ft_print_color(YELLOW, "sb ", 1);
}

void	s_on_ab(t_lst *lst1, t_lst *lst2)
{
	s_on_a(lst1, lst1->next);
	s_on_b(lst2, lst2->next);
	ft_print_color(YELLOW, "ss ", 1);
}
