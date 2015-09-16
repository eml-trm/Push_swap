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
#include <stdio.h>
#include "push_swap.h"

int		check_list(t_lst *lst1, t_lst *lst2)
{
	while (lst1 && lst1->next)
	{
		if (lst1->data < lst1->next->data)
			return(1);
		lst1 = lst1->next;
	}
	while (lst2 && lst2->next)
	{
		if (lst2->data > lst2->next->data)
			return (2);
		lst2 = lst2->next;
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
		move++;
	}
	return (move);
}

void	resolution(t_lst *lsta, t_lst *lstb)
{
	static int 	count = 0;
	
	if (options()->v)
		print_lst(lsta, lstb);
	while (check_list(lsta, lstb))
	{
		while (check_list(lsta, lstb) == 1)
		{
			if (verif_swap_a(lsta) == 1)
			{
				swap(&lsta);
				if (options()->v)
					print_lst(lsta, lstb);
				count++;
			}
			push(&lsta, &lstb);
			if (options()->v)
				print_lst(lsta, lstb);
			count++;
		}
		while (check_list(lsta, lstb) == 2)
		{
			if (verif_swap_b(lstb) == 1)
			{
				swap(&lstb);
				count++;
			}
			push(&lstb, &lsta);
			count++;
		}
	}
	count += remove_list(&lsta, &lstb);
	if (options()->v)
		print_lst(lsta, lstb);
	if (options()->n)
	{
		ft_putstr("\nResolve in ");
		ft_putnbr(count);
		ft_putstr(" moves\n");
	}
}



























