/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:39:19 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/27 09:40:09 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>


size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t x;
	size_t y;

	x = 0;
	y = 0;
	while (dst[x])
	{
		x++;
	}
	while(src[y] != '\0' && y < dstsize)
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	dst[x] = '\0';
	return(x);
}
