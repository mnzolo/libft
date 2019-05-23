/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:48:40 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/22 13:03:28 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	char *a;

	a = (char*)s;
	i = 0;
	if(n > 0)
	{
		while(i < n)
		{
			a[i] = 0;
			i++;
		}
	}
}