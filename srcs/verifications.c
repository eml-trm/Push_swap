/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifications.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/06 11:50:25 by etermeau          #+#    #+#             */
/*   Updated: 2015/09/06 11:50:30 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		verif_swap_b(t_lst *lst)
{
	t_lst *tmp;

	if (!lst)
		return (0);
	tmp = lst;
	while (tmp && tmp->next && tmp->next->next)
		tmp = tmp->next;
	if (!tmp->next)
		return (0);
	if (tmp->data > tmp->next->data)
		return(1);
	return(0);
}

int		verif_swap_a(t_lst *lst)
{
	t_lst *tmp;

	if (!lst)
		return (0);
	tmp = lst;
	while (tmp && tmp->next && tmp->next->next)
		tmp = tmp->next;
	if (!tmp->next)
		return (0);
	if (tmp->data < tmp->next->data)
		return(1);
	return(0);
}

// int		verif_rotate_b(t_lst *lst)
// {
// 	t_lst	*tmp;
// 	t_lst	*tmp2;

// 	tmp = lst;
// 	tmp2 = tmp;
// 	if (!lst)
// 		return (0);
// 	if (tmp2->data > tmp->next->data)
// 		return(2);
// 	while (tmp && tmp->next)
// 		tmp = tmp->next;
// 	if (tmp2->data > tmp->data)
// 		return (1);
// 	return (0);
// }

// int		verif_rotate_a(t_lst *lst)
// {
// 	t_lst	*tmp;
// 	t_lst	*tmp2;

// 	tmp = lst;
// 	tmp2 = tmp;
// 	if (tmp2->data < tmp->next->data)
// 		return(2);
// 	while (tmp && tmp->next)
// 		tmp = tmp->next;
// 	if (tmp2->data < tmp->data)
// 		return (1);
// 	return (0);
// }

// int		verif_size(int nb)
// {
// 	int result;

// 	result = nb % 2;
// 	if (result == 0)
// 		return (nb / 2);
// 	return (0);
// }