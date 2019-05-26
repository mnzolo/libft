/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 09:18:17 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/26 10:01:45 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char	*s1)
{
	int	i;

	s1 = (char*)malloc(sizeof(char*));

	while( s1[i] != '\0')
	{
		i++;
		return(s1);
	}
	free(s1);
	return (NULL);
}
