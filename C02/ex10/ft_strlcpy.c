/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abturan <abturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 03:45:49 by abturan           #+#    #+#             */
/*   Updated: 2024/01/29 14:46:16 by abturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	temparr;
	unsigned int	src_len;

	src_len = 0;
	temparr = 0;
	while (src[src_len] != '\0')
		src_len++;

	while ((temparr < src_len) && (temparr < size - 1))
	{
		dest[temparr] = src[temparr];
		temparr++;
	}
	dest[temparr] = '\0';
	return (src_len);
}
#include<stdio.h>
int main()
{
	char dest[]="kadir";
	char src[]="aloalo";
	printf("%d\n",ft_strlcpy(dest,src,10));
	printf("%s",dest);

}