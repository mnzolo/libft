/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 10:02:23 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/19 17:41:59 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;
	size_t			j;
	unsigned char	c[len];

	i = 0;
	j = 0;
	if (!dst && !src)
	{
		return (NULL);
	}
	s = (unsigned char *)src;
	d = (unsigned char *)dst; 
	ft_memcpy(c, s, len);//this
	while (i < len && j < len)//this, isn't it the same
	{
		d[i] = c[j + i];
		i++;
	}
	len--;
	return (d);
}
