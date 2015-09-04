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

int		verif_size(int nb)
{
	int result;

	result = nb % 2;
	if (result == 0)
		return (nb / 2);
	return (0);
}

void	verif_last(t_lst *lst)
{
	t_lst	*tmp;

	tmp = lst;

	while (tmp && tmp->next && tmp->next->next)
		tmp = tmp->next;
	if (tmp->data < tmp->next->data)
		swap(&lst);
}

void	resolution(int nb, t_lst *lsta, t_lst *lstb)
{
	int		size;
	int		rot;

	ft_putstr("Debut:");
	print_lst(lsta, lstb);

	verif_last(lsta);
	print_lst(lsta, lstb);

	size = verif_size(nb);
	if (size > 0)
		while (size-- > 0)
			p_on_b(&lsta, &lstb);

	rotate(&lsta);
	rotate(&lstb);
	
	rot = verif_rotate(lsta); // attention lsta doit etre decroissant// lstb croissant pour remettre sur la pile
 	if (rot == 1)

	print_lst(lsta, lstb);
}