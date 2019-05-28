/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 08:37:36 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/28 17:30:23 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t			i;
	char			*s2;
	unsigned char	c2;

	i = 0;
	s2 = (char*)s;
	c2 = (unsigned char)c;
	while (s2[i] != '\0' && i < n)
	{
		if (s2[i] == c2)
		{
			i++;
			return (s + i);
		}
	}
	return (NULL);
}
