/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:08:56 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/03 12:58:13 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int		a;
	char	c2;

	a = 0;
	c2 = (char)c;
	if (c2 == '\0')
	{
		return (s + ft_strlen(s) + a);
	}
	a = ft_strlen(s);
	while (s[a--] != c2 && a >= 0)
	{
		if (s[a] == c2)
		{
			return (s + a);
		}
	}
	return (NULL);
}
