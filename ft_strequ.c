/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 11:01:25 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/26 12:11:16 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <stdio.h>

int	ft_strequ(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while( s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	j = (s1[i] - s2[i]);

	if(j == 0)
	{
		return(1);
	}
	return (0);
}

int	main()
{
	char str1[5] = "mtho";
	char str2[5] = "mtho";

	printf("%d", ft_strequ(str1,str2));
	return (0);
}
