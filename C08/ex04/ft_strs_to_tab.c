/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:06:02 by abturan           #+#    #+#             */
/*   Updated: 2024/02/12 20:29:10 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_str(char *str)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(str_len(str) + 1);
	if (!ptr)
		return (0);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;
	int					total;
	int					i;
	int					j;

	total = 0;
	i = 0;
	j = ac;
	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (0);
	while (j > 0)
	{
		arr[i].size = str_len(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_str(av[i]);
		j--;
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
