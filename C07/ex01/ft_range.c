/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 03:42:42 by abturan           #+#    #+#             */
/*   Updated: 2024/02/11 16:08:06 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;
	int	counter;

	counter = max - min;
	i = 0;
	if (min >= max)
		return (0);
	dest = (int *)malloc((counter * sizeof(int)));
	if (dest == NULL)
		return (0);
	while (counter > i)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
