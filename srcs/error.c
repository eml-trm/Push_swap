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

void	print_lst(t_lsta *lst)
{
	t_lsta *tmp;

	tmp = lst;
	while (tmp)
	{
		ft_putnbr(tmp->data);
		ft_putchar('\n');
		tmp = tmp->next;
	}
}
