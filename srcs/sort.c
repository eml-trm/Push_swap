/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 17:59:13 by etermeau          #+#    #+#             */
/*   Updated: 2015/09/21 17:59:15 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		a_is_sort(t_lst *lsta)
{
	t_lst	*tmp1;

	tmp1 = lsta;
	while (tmp1 && tmp1->next)
	{
		if (tmp1->data < tmp1->next->data)
			return (1);
		tmp1 = tmp1->next;
	}
	return (0);
}

int		b_is_sort(t_lst *lstb)
{
	t_lst	*tmp2;

	tmp2 = lstb;
	while (tmp2 && tmp2->next)
	{
		if (tmp2->data > tmp2->next->data)
			return (1);
		tmp2 = tmp2->next;
	}
	return (0);
}

int		is_sort(t_lst *lst1, t_lst *lst2)
{
	if (a_is_sort(lst1))
		return (1);
	if (b_is_sort(lst2))
		return (2);
	return (0);
}
