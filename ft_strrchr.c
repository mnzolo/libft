/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:08:56 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/24 15:58:10 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(char *s, int c)
{
	int i;
	char c2;

	i = 0;
	c2 = (char)c;
	while(s[i] != '\0')
	{
		i++;
	}
	while( s[i--] != c2)
	{
		if( s[i] == c2)
			{
				return(s);
			}
	}
	return (NULL);

}

int main()
{
	char str[] = "mthoko";

	printf("%s\n", strrchr(str,'o'));
	return (0);
}
