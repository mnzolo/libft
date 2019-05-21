/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:03:20 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/21 13:26:20 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	ft_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	while( haystack[i] != '\0' && needle[i] != '\0')
	{
		haystack[i] = needle[i];
		i++;
	}
	if(needle[i] == '\0')
	{
		return(&haystack[i]);
	}
	if(needle[i] != haystack[i])
	{
		return(NULL);
	}
	else
		i = 1;
	return(&needle[i]);

}
