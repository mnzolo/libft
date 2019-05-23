/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:08:54 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/23 13:10:53 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_memcpy(void *dst, void *src, size_t n)
{
	size_t i;
	char	*a;
	char	*b;

	a = (char*)dst;
	b = (char*)src;
	i = 0;
	while( i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}

int    main(void)
{
    char str[19] = "This is an example";
    int i;

    i = 0;
    printf("%s\n", ft_memcpy(str + 7, str, 8));
    /*for (i = 0; i < 12; i++)
        printf("%c |", dest[i]);*/
    return (0);
}