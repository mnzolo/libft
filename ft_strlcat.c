/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:39:19 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/05 15:52:49 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	while (dst[x] != '\0' && x < dstsize)
	{
		x++;
	}
	while (src[y] != '\0' && x + y + 1 < dstsize)
	{
		dst[x + y] = src[y];
		y++;
	}
	if (x != dstsize)
	{
		dst[x + y] = '\0';
	}
	return (ft_strlen(src) + x);
}
