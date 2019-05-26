/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 08:37:36 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/26 09:14:12 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t i;
	char *s2;
	unsigned char c2;

	i = 0;
	s2 = (char*)s;
	c2 = (unsigned char)c;

	while (s2[i] != '\0' && i < n)
	{
		if( s2[i] == c2)
		{
			i++;
			return (s + i);
		}
	}
	return (NULL);	
}
