/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 11:30:41 by etermeau          #+#    #+#             */
/*   Updated: 2015/05/27 11:30:50 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft.h"
#include <stdio.h>

# define DEBUG printf("%d, %s\n", __LINE__, __FUNCTION__)

typedef struct		s_lst
{
	int				data;
	struct s_lst	*next;
	struct s_lst	*prev;
}					t_lst;

/* operations */

void	s_on_a(t_lst *lsta, t_lst *lsta2);
void	s_on_b(t_lst *elem1, t_lst *elem2);
void	p_on_a(t_lst *lst1, t_lst *lst2);
void	p_on_b(t_lst *lst1, t_lst *lst2);

/* list */
t_lst		*elem_circu_create(int nb);
void	lst_add(t_lst **lst1, t_lst *new);
void	ft_new_list(t_lst **list, int nb);
void	lst_del_last(t_lst *lst);
t_lst	*ft_new_elem(int nb);

/* erreur */

void	error_code(int status);


void	print_lst(t_lst *lst);

#endif
