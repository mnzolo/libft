/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:21:30 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/23 11:15:38 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


void	*ft_memccpy(void *dst, void *src,int c, size_t n)
{
	size_t i;
	char *a;
	const char *b;
	unsigned char c2;

	i = 0;
	a = (char*)dst;
	b = (char*)src;
	c2 = (unsigned char)c;
	while(i < n && b[i] != c2)
	{
		a[i] = b[i];
		i++;
	}
	if( i == n)
	{
		return(NULL);
	}
	else
		return( a + i + 1);
}

int	main()
{
	char str1[20] = "Tafadzwa";
	char str2[6] = "string";

	printf("%s", ft_memccpy(str2,str1,'f',5));
	return(0);
}
