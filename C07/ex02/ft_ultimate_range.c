/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 03:55:56 by abturan           #+#    #+#             */
/*   Updated: 2024/02/11 16:10:14 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	counter;

	i = 0;
	counter = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(counter * sizeof(int));
	if (arr == NULL)
		return (-1);
	*range = arr;
	while (counter > i)
	{
		arr[i] = min + i;
		i++;
	}
	return (counter);
}
