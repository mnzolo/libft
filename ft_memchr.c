/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 08:37:36 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/31 17:09:13 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;
	unsigned char	c2;

	i = 0;
	s2 = (unsigned char*)s;
	c2 = (unsigned char)c;
	while (i < n)
	{
		if (s2[i] == c2)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
