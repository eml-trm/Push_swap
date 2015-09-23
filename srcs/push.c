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

#include "push_swap.h"

int		push(t_lst **src, t_lst **dst)
{
	t_lst	*tmp;

	tmp = *src;
	if (tmp->name == 'a')
		ft_print_color(YELLOW, "pb ", 1);
	else
		ft_print_color(BLUE, "pa ", 1);
	if (*src == NULL)
		return (0);
	lst_change(src, dst);
	return (1);
}
