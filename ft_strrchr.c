/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:08:56 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/02 12:27:20 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int		i;
	int		a;
	char	c2;

	i = 0;
	c2 = (char)c;
	if (c2 == '\0')
	{
		return (s + ft_strlen(s) + i);
	}
	a = ft_strlen(s);
	while (s[a] != c2)
	{
		if (s[a] != c2)
		{
			return (&s[a]
		}
		if (s[a] == c2)
		{
			return (s + a);
		}
		a--;
	}
	return (NULL);
}
