/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 04:33:24 by abturan           #+#    #+#             */
/*   Updated: 2024/02/11 16:22:06 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_adition(char **strs, char *sep, char *dest, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	j = 0;
	while (size > 0)
	{
		while (strs[j][k])
			dest[i++] = strs[j][k++];
		j++;
		size--;
		if (size > 0)
		{
			k = 0;
			while (sep[k])
				dest[i++] = sep[k++];
		}
		k = 0;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_size(int size, char **strs)
{
	int	j;

	j = 0;
	size--;
	while (size >= 0)
	{
		while (strs[size][j])
			j++;
		size--;
	}
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		a;

	i = 0;
	while (sep[i])
		i++;
	a = i * (size - 1) + 1;
	dest = (char *)malloc((ft_total_size(size, strs) * sizeof(char)) + a);
	if (dest == NULL)
		return (NULL);
	if (size == NULL)
		return (dest);
	dest = ft_adition(strs, sep, dest, size);
	return (dest);
}
