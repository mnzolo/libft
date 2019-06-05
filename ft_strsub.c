/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:53:00 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/05 11:47:17 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char *s, unsigned int start, size_t len)
{
	char	*j;
	size_t	i;
	size_t	p;

	p = 0;
	i = start;
	j = (char*)malloc(sizeof(char) * (len + 1));
	if (j == 0)
	{
		return (NULL);
	}
	len = len + i;
	while (i < len)
	{
		j[p] = s[i];
		p++;
		i++;
	}
	j[i] = '\0';
	return (j);
}
