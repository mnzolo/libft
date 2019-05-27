/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:49:59 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/27 09:40:19 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strnequ(char	*s1, char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0' && i < n && s1[i] == s2[i])
	{
		i++;
	}
	j = (s1[i] - s2[i]);
	if( j == 0)
	{
		return (1);
	}
	return (0);
}

int main()
{
	char str1[] = "mthoko";
	char str2[] = "nzolo";

	printf("%d", ft_strnequ(str1,str2,4));
	return (0);
}
