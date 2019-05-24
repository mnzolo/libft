/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:41:15 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/24 16:00:43 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr( char *s, int c)
{
	int i;
	char b;

	i = 0;
	b = (char)c;
	while(s[i++] != '\0')
	{
		if (s[i] == b)
		{
			return (s + i);
		}
	}
	return(NULL);
}

int	main()
{
	char str[] = "mthok";

	printf("%s",strchr(str,'t'));
	return(0);
}
