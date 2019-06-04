/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:53:00 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/04 18:21:36 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char *s, unsigned int start, size_t len)
{
	char	*j;
	size_t	i;
	char	u;

	i = 0;
	u = (char)start;
	j = (char*)malloc(sizeof(char)*(len + 1));
	if (j == 0)
	{
		return (NULL);
	}
	while(s[i] != '\0')
	{
		while (i < len)
		{
			j[i] = s[u];
			i++;
			u++;
		}
	}
	s[i] = '\0';
	return (j);
}
