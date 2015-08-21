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

void	resolution(t_lst *lsta, t_lst *lstb)
{
	ft_putstr("Debut:");
	print_lst(lsta, lstb);

	swap(&lsta);
	print_lst(lsta, lstb);

	p_on_b(&lsta, &lstb);  
	print_lst(lsta, lstb);
	p_on_a(&lstb, &lsta);
	print_lst(lsta, lstb);
	p_on_b(&lsta, &lstb);
	print_lst(lsta, lstb);

	// rotate(&lsta);
	// rotate(&lstb);
	// print_lst(lsta, lstb);

	// rev_rotate(&lsta);
	// rev_rotate(&lstb);
	// print_lst(lsta, lstb);

	// p_on_b(&lstb, &lsta);
	// p_on_b(&lstb, &lsta);
	// p_on_b(&lstb, &lsta);
	// print_lst(lsta, lstb);
}