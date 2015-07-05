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
		if (ft_strstr(tab[i], line))
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
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	t_lsta	*lsta;
	t_lsta	*lstb;
	int i;

	i = 1;
	lsta = NULL;
	lstb = NULL;
	if (ac == 1)
		error_code(0);
	else
	{
		check_arg(av);
		while (av[i])
		{
			lst_add(&lsta, ft_new_elem(ft_atoi(av[i])));
			i++;
		}
		ft_putstr("Debut:");
		print_lst(lsta, lstb);

		s_on_a(&lsta);
		print_lst(lsta, lstb);

		// p_on_b(&lsta, &lstb);
		// print_lst(lsta, lstb);

	}
	ft_print_color(BLUE, "OK\n", 1);
	return (0);
}
