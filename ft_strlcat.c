/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:39:19 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/24 12:01:38 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

int main()
{
	char str1[11] = "mtho";
	char str2[6] = "nzolo";

	printf("%lu", strlcat(str1,str2,2));
	return (0);
}
