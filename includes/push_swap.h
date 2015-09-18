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

typedef struct  	s_lst
{
	int				data;
	char			name;
	struct s_lst	*next;
	struct s_lst	*prev;
}					t_lst;

typedef struct  	s_opt
{
	int 			v;
	int				n;
	int				active;
}					t_opt;

/* options */
void	apply_opt_n(int nb);
void	apply_opt_v(t_lst *lst1, t_lst *lst2);
void 	is_option(char *str);
t_opt	*options(void);

/* resolution */
int		verif_size(int nb);
int		verif_rotate_a(t_lst *lst);
int		verif_rotate_b(t_lst *lst);
int		verif_swap_a(t_lst *lst);
int		verif_swap_b(t_lst *lst);
void	resolution(t_lst *lsta, t_lst *lstb);

/* operations */
void	rev_rotate(t_lst **lst);
void	rotate(t_lst **lst);
void	swap(t_lst **lst);
void	push(t_lst **lst1, t_lst **lst2);

/* list */
void	lst_add2(t_lst **list, t_lst *new);
void	lst_add(t_lst **lst1, t_lst *new);
void	ft_new_list(t_lst **list, int nb);
void	lst_change(t_lst **src, t_lst **dst);
t_lst	*ft_new_elem(int nb);

/* annexes */
void	error_code(int status);
void	print_lst(t_lst *lst1, t_lst *lst2);

#endif
