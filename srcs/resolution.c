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
			return (1);
		lst2 = lst2->next;
	}
	return (0);
}

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
		p_on_a(lstb, lsta);
}

void	resolution(int nb, t_lst *lsta, t_lst *lstb)
{
	int		size;
	int		rot;
	int		swp;

	ft_print_color(BLUE, "Start:\n", 1);
	print_lst(lsta, lstb);
	while (check_list(lsta, lstb))
	{
		if (verif_swap_a(lsta) == 1)
		{
			swap(&lsta);
			print_lst(lsta, lstb);
		}
		
		size = verif_size(nb);
		if (size > 0)
		{
			while (size-- > 0)
				p_on_b(&lsta, &lstb);
			print_lst(lsta, lstb);
		}
		rot = verif_rotate_a(lsta);
		if (rot == 1)
			rotate(&lsta);
		else
			rev_rotate(&lsta);
		print_lst(lsta, lstb);

		rot = verif_rotate_b(lstb);
		if (rot == 1)
			rotate(&lstb);
		else
			rev_rotate(&lstb);
		print_lst(lsta, lstb);

		swp = verif_swap_a(lsta);
		if (swp == 1)
			swap(&lsta);	
		swp = verif_swap_b(lstb);
		if (swp == 1)
			swap(&lstb);
		print_lst(lsta, lstb);
	}
	remove_list(&lsta, &lstb);
	print_lst(lsta, lstb);
}



























