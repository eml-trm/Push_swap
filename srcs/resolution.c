/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolution.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermebu <eteameau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 11:52:34 by etermeau          #+#    #+#             */
/*   Updated: 2015/07/29 11:52:35 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	remove_list(t_lst **lsta, t_lst **lstb)
{
	t_lst	*tmp;
	int		count;

	count = 0;
	tmp = *lstb;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	while (count-- > 0)
	{
		options()->moves += push(lstb, lsta);
		apply_opt_v(*lsta, *lstb);
	}
}

void	resolve_a(t_lst **lsta, t_lst **lstb)
{
	if (verif_swap_a(*lsta))
	{
		options()->moves += swap(lsta);
		apply_opt_v(*lsta, *lstb);
	}
	if (is_sort(*lsta, *lstb) == 1)
	{
		options()->moves += push(lsta, lstb);
		apply_opt_v(*lsta, *lstb);
	}
}

void	resolve_b(t_lst **lsta, t_lst **lstb)
{
	if (verif_swap_b(*lstb))
	{
		options()->moves += swap(lstb);
		apply_opt_v(*lsta, *lstb);
	}
	if (is_sort(*lsta, *lstb) == 2)
	{
		options()->moves += push(lstb, lsta);
		apply_opt_v(*lsta, *lstb);
		if (verif_swap_a(*lsta))
		{
			options()->moves += swap(lsta);
			apply_opt_v(*lsta, *lstb);
		}
	}
}

void	resolution(t_lst *lsta, t_lst *lstb)
{
	while (is_sort(lsta, lstb))
	{
		while (a_is_sort(lsta) == 1)
			resolve_a(&lsta, &lstb);
		while (is_sort(lsta, lstb) == 2)
			resolve_b(&lsta, &lstb);
		remove_list(&lsta, &lstb);
	}
}
