/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:48:27 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/05 12:14:50 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*s2;
	char			*j;

	i = 0;
	s2 = (char *)s;
	j = (char *)malloc(sizeof(char) * (ft_strlen(s)));
	while (s[i] != '\0')
	{
		j[i] = f(s2[i]);
		i++;
	}
	return (j);
}
