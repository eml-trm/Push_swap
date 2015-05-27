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

#include "push_swap.h"

static int	check_double(char **tab, char *line)
{
	int i;

	i = 0;
	
}

static void	check_arg(char **tab)
{
	int	i;

	i = 1;
	while (tab[i])
	{
		if (ft_isint(tab[i], ft_strlen(tab[i])) == 1)
			error_code(0);
		if (check_double(tab, tab[i]) == 1)
			error_code(0);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 1)
		error_code(0);
	else
	{
		check_arg(av);
	}
	ft_print_color(BLUE, "OK\n", 1);
	return (0);
}