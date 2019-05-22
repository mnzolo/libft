/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:41:15 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/22 09:47:41 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	ft_strchr( char *s, int c)
{
	int i;

	i = 0;
	while(s[i++] == '\0')
	{
		s[i] = (*char)c;
		return(c);
	}
	if(s[i] != c)
	{
		return(NULL);
	}
}

int	main()
{
	char str[] = "mthok";
	
	printf("%s",strchr(str,'\0'));
	return(0);
}
