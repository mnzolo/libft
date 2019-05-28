/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:18:39 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/28 17:32:42 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*j;
	size_t	i;

	i = 0;
	j = (char*)malloc(sizeof(char) * (size));
	if (j == '\0')
	{
		return (NULL);
	}
	while (j[i] != '\0' && i < size)
	{
		j[i] = 0;
		i++;
	}
	return (j);
}
