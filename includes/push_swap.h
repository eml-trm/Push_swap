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

typedef struct  	s_lsta
{
	int				data;
	struct s_lsta	*next;
	struct s_lsta	*prev;
}					t_lsta;

/* operations */

void	s_on_a(t_lsta **lsta, t_lsta **lsta2);
void	s_on_b(t_lsta **elem1, t_lsta **elem2);
void	p_on_a(t_lsta **lst1, t_lsta **lst2);
void	p_on_b(t_lsta **lst1, t_lsta **lst2);

/* list */

void	lst_add(t_lsta **lst1, t_lsta *new);
void	ft_new_list(t_lsta **list, int nb);
void	lst_del_last(t_lsta *lst);
t_lsta	*ft_new_elem(int nb);

/* erreur */

void	error_code(int status);


void	print_lst(t_lsta *lst);

#endif
