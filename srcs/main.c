/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 11:41:18 by etermeau          #+#    #+#             */
/*   Updated: 2015/05/27 11:41:20 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include "push_swap.h"

static int 	check_double(int nb, t_lst **lst)
{
	t_lst	*tmp;

	tmp = *lst;
	while (tmp && tmp->next)
	{
		if (tmp->data == nb)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

static int	check_arg(char **tab)
{
	int i;
	int count;

	i = 1;
	count = 1;
	while (tab[i][0] == '-' && (tab[i][1] >= 97 && tab[i][1] <= 122))
	{
		is_option(tab[i]);
		count++;
		i++;
	}
	while (tab[i])
	{
		if (ft_isint(tab[i], ft_strlen(tab[i])) == 0)
			i++;
		else
			error_code(0);
	}
	return (count);
}

t_lst		*create_list(int ac, char **av)
{
	t_lst	*lsta;
	int		nb;
	int		i;

	lsta = NULL;
	i = check_arg(av);
	while (ac - i)
	{
		nb = ft_atoi(av[ac - 1]);
		if (check_double(nb, &lsta) == 0)
			lst_add(&lsta, ft_new_elem(nb));
		ac--;
	}
	return (lsta);
}

int		main(int ac, char **av)
{

	t_lst	*lsta;
	t_lst 	*lstb;

	lsta = NULL;
	lstb = NULL;
	if (ac == 1)
		error_code(0);
	else
	{
		options();
		lsta = create_list(ac, av);
		resolution(lsta, lstb);
	}
	return (0);
}
