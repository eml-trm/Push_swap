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

static int	check_double(char **tab, char *line, int len)
{
	int i;

	i = 1;
	while (i < len)
	{
		if (ft_strequ(tab[i], line))
			return (1);
		i++;
	}
	return (0);
}

static void	check_arg(char **tab)
{
	int i;

	i = 1;
	while (tab[i])
	{
		if (ft_isint(tab[i], ft_strlen(tab[i])) == 1)
			error_code(0);
		if (check_double(tab, tab[i], i) == 1)
			error_code(0);
		i++;
	}
}

int		main(int ac, char **av)
{
	t_lst	**lsta;
	t_lst	**lstb;
	int i;

	lsta = NULL;
	lstb = NULL;
	i = 1;
	if (ac == 1)
		error_code(0);
	else
	{
		check_arg(av);
		while (av[i])
		{
			ft_new_list(lsta, ft_atoi(av[i]));
			i++;
		}
		s_on_a(*lsta, (*lsta)->next);
		ft_putendl("Avant :");
		print_lst(*lsta);
		ft_putchar('\n');
		print_lst(*lstb);
		ft_putendl("Apres :");
		print_lst(*lsta);
		ft_putchar('\n');
		print_lst(*lstb);
	}
	ft_print_color(BLUE, "OK\n", 1);
	return (0);
}
