/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:41:37 by abturan           #+#    #+#             */
/*   Updated: 2024/02/07 14:58:53 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	next(int nb)
{
	int	i;

	i = 2;
	while (nb / i >= i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 2)
		return (2);
	while (1)
	{
		if (next(nb) != 0)
			return (nb);
		nb++;
	}
}
