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

int		is_sort(t_lst *lst1, t_lst *lst2)
{
	t_lst	*tmp1;
	t_lst	*tmp2;

	tmp1 = lst1;
	tmp2 = lst2;
	while (tmp1 && tmp1->next)
	{
		if (tmp1->data < tmp1->next->data)
			return (1);
		tmp1 = tmp1->next;
	}
	while (tmp2 && tmp2->next)
	{
		if (tmp2->data > tmp2->next->data)
			return (2);
		tmp2 = tmp2->next;
	}
	return (0);
}

int		remove_list(t_lst **lsta, t_lst **lstb)
{
	t_lst	*tmp;
	int		move;
	int		count;

	count = 0;
	move = 0;
	tmp = *lstb;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	while (count-- > 0)
	{
		push(lstb, lsta);
		apply_opt_v(*lsta, *lstb);
		move++;
	}
	return (move);
}

void	resolution(t_lst *lsta, t_lst *lstb)
{
	static int	count = 0;

	while (is_sort(lsta, lstb))
	{
		while (is_sort(lsta, lstb) == 1)
		{
			if (verif_swap_a(lsta))
			{
				swap(&lsta);
				apply_opt_v(lsta, lstb);
				count++;
			}
			if (is_sort(lsta, lstb) == 1)
			{
				push(&lsta, &lstb);
				apply_opt_v(lsta, lstb);
				count++;
			}
		}
		while (is_sort(lsta, lstb) == 2)
		{
			if (verif_swap_b(lstb))
			{
				swap(&lstb);
				apply_opt_v(lsta, lstb);
				count++;
			}
			if (is_sort(lsta, lstb) == 2)
			{
				push(&lstb, &lsta);
				apply_opt_v(lsta, lstb);
				if (verif_swap_a(lsta))
				{
					swap(&lsta);
					apply_opt_v(lsta, lstb);
					count++;
				}
				count++;
			}
		}
		count += remove_list(&lsta, &lstb);
	}
	apply_opt_v(lsta, lstb);
	apply_opt_n(count);
}
