/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/02 14:27:29 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/02 14:27:33 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "push_swap.h"

void	push(t_lst **src, t_lst **dst)
{
	t_lst *tmp;

	tmp = *src;
	if (tmp->name == 'a')
		ft_print_color(YELLOW, "pb ", 1);
	else
		ft_print_color(YELLOW, "pa ", 1);
	if (*src == NULL)
		return ;
	lst_change(src, dst);
}
