/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:13:49 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/27 16:36:53 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>


char *ft_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	while(haystack[i] != '\0' && needle[i] != '\0')
	{
		i++;
		if(needle[i] == '\0')
		{
			return(haystack);
		}
		if(needle[i] != haystack[i])
		{
			return(NULL);
		}
	}
	return(&needle[i]);
}
