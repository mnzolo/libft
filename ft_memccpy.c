/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:21:30 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/22 17:54:35 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


void	*ft_memccpy(void *dst, void *src,int c, size_t n)
{
	size_t i;
	char *a;
	char *b;

	i = 0;
	a = (char*)dst;
	b = (char*)src;

	while(i == n)
	{
		a[i] = b[i];
		if( i == c)
		{
			return(b);
		}
		else
			i++;
		return(NULL);
	}
}

int	main()
{
	char *str1 = " ";
	char *str2 = "nzolo";

	printf("%s",memccpy(str1,str2,'z',2));
	return(0);
}
