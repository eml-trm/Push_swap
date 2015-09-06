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

t_lst	*create_list(int ac, char **av)
{
	t_lst  *lsta;

	lsta = NULL;
	check_arg(av);
	while (ac - 1)
	{
		lst_add(&lsta, ft_new_elem(ft_atoi(av[ac - 1])));
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
		lsta = create_list(ac, av);
		resolution(ac - 1, lsta, lstb);
	}
	ft_print_color(BLUE, "End\n", 1);
	return (0);
}
