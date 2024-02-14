/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:28:49 by abturan           #+#    #+#             */
/*   Updated: 2024/02/04 15:35:16 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	n;
	int	h;

	n = 0;
	h = 0;
	if (to_find[n] == '\0')
		return (str);
	while (str[h] != '\0')
	{
		while (str[h + n] == to_find[n] && str[h + n] != '\0')
			n++;
		if (to_find[n] == '\0')
			return (str + h);
		h++;
		n = 0;
	}
	return (0);
}
