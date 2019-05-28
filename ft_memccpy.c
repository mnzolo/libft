/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:21:30 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/28 17:31:59 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(const void *dst, void *src, int c, size_t n)
{
	size_t			i;
	char			*a;
	char			*b;
	unsigned char	c2;

	i = 0;
	a = (char*)dst;
	b = (char*)src;
	c2 = (unsigned char)c;
	while (i < n && b[i] != c2)
	{
		a[i] = b[i];
		i++;
	}
	if (i == n)
	{
		return (NULL);
	}
	else
		return (a + i + 1);
}
