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
#include <stdio.h>
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

void	print_lst(t_lst *lst1, t_lst *lst2)
{
	t_lst	*tmp1;
	t_lst	*tmp2;

// 	tmp1 = lst2;                       ==> test pour voir si prev de lst2 fonctionne
// 	if (tmp1)
// 	{
// 		while (tmp1 && tmp1->next)
// 		{	printf("ICI\n");
// 			tmp1 = tmp1->next;
// 		}
// 		while (tmp1)
// 		{
// 			ft_putnbr(tmp1->data);
// 			tmp1 = tmp1->prev;
// 		}
// 	}
// (void)lst1;
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
			// printf("ICI\n");
			ft_putnbr(tmp2->data);
			ft_putchar(' ');
			tmp2 = tmp2->next;
		}
	}
	ft_putchar('\n');
	ft_putchar('\n');
}
