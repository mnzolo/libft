/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:53:00 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/29 16:19:12 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char *s, unsigned int start, size_t len)
{
	size_t i;
	char *j;

	i = 0;
	j = (char*)malloc(sizeof(char)*(len + 1));

	while(s[i] != '\0' && s[i] &&i < len)
	{
		i++;
		s[i] = start;
	}
	return (s);
}
