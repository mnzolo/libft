/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 10:02:23 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/03 14:24:10 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	char	c[len];
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	s = (char *)src;
	d = (char *)dst;
	ft_memcpy(c, s, len);
	while (i < len && j < len)
	{
		d[i] = c[j];
		i++;
		j++;
	}
	len--;
	return (d);
}
