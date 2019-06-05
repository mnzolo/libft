/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:49:11 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/05 16:08:17 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	char	*s2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s2 = (char *)s;
	p = (char *)malloc(sizeof(char) * (ft_strlen(s)));
	while (s[i] != '\0')
	{
		p[j] = f(i, s2[i]);
		j++;
		i++;
	}
	return (p);
}
