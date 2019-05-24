/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:29:12 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/24 16:57:54 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>


int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t i;
	unsigned char *a;
	unsigned char *b;

	i = 0;
	a = (unsigned char*)s1;
	b = (unsigned char*)s2;

	while(a[i] != '\0' && b[i] != '\0' && a[i] == b[i])
	{
		i++;
	}
	return(a[i] - b[i]);

}
