/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:13:49 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/30 12:42:01 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	char	*h;
	char	*n;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	while (h[i] != '\0' && n[i] != '\0')
	{
		if (needle == '\0')
		{
			return (&*h);
		}
		if (n[i] != h[i])
		{
			return (NULL);
		}
		i++;
	}
	return (&n[i]);
}	
#include <stdio.h>
int main()
{
	char str1[] = "mtho";
	char str2[] = "mtho";

	printf("%s", ft_strstr(str1, str2));
	return (0);
}
