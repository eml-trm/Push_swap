/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 12:05:19 by etermeau          #+#    #+#             */
/*   Updated: 2015/05/27 12:05:24 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isint(char *str, int len)
{
	char	*tmp;

	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '-' || *str == '+')
		str++;
	tmp = str;
	while (*tmp)
	{
		if (ft_isdigit(*tmp) == 1)
			return (1);
		tmp++;
	}
	if (len == 10)
	{
		if (ft_strcmp(str, "2147483647") > 0)
			return (1);
	}
	else if (len > 10)
		return (1);
	return (0);
}
