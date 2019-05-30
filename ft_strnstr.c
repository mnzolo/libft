/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:54:37 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/29 12:04:09 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while (haystack[i] != '\0' && needle[i] != '\0')
	{
		haystack[i < len] = needle[i < len];
	}
	if (needle[i] == '\0')
	{
		return (&haystack[i]);
	}
	if (needle[i] != haystack[i])
	{
		return (NULL);
	}
	else
		i = 0;
	return (&needle[i]);
}
