/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:53:31 by abturan           #+#    #+#             */
/*   Updated: 2024/01/27 07:35:06 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(int a)
{
	char	b;

	b = a + 48;
	write(1, &b, 1);
}

void	transform(int a, int b)
{
	putchar(a / 10);
	putchar(a % 10);
	write (1, " ", 1);
	putchar(b / 10);
	putchar(b % 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			transform(a, b);
			if (a != 98)
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}
