/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 11:50:52 by etermeau          #+#    #+#             */
/*   Updated: 2015/05/27 11:50:54 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_code(int status)
{
	if (status == 0)
	{
		ft_print_color(RED, "Error: Arguments incorrects\n", 2);
		ft_print_color(RED, "Only numbers and no double\n", 2);
	}
	if (status == 1)
		ft_print_color(RED, "Error: Malloc\n", 2);
	exit(1);
}

void	print_lst(t_lsta *lst1, t_lsta *lst2)
{
	t_lsta	*tmp1;
	t_lsta	*tmp2;

	tmp1 = lst1;
	ft_putstr("\na: ");
	if (lst1)
	{
		while (tmp1)
		{
			ft_putnbr(tmp1->data);
			ft_putchar(' ');
			tmp1 = tmp1->next;
		}
	}
	ft_putchar('\n');
	ft_putstr("b: ");
	if (lst2)
	{
		tmp2 = lst2;
		while (tmp2)
		{
			ft_putnbr(tmp2->data);
			ft_putchar(' ');
			tmp2 = tmp2->next;
		}
	}
	ft_putchar('\n');
	ft_putchar('\n');
}
