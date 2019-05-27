/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:56:13 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/27 17:24:37 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char *s1, char *s2)
{
	int i;
	int g;
	char *j;

	i = 0;
	g = 0;
	j = (char*)malloc(sizeof(char*));
	while(s1[i])
	{
		i++;
	}
	while(s2[g] != '\0')
	{
		s1[i] = s2[g];
		i++;
		g++;
	}
	s1[i] = '\0';
	return(s1);
}

int main()
{
	char str1[] = "mthoko";
	char str2[] = "nzolo";

	printf("%s", ft_strjoin(str1, str2));
	return (0);
}
