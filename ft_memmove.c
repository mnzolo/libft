/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 10:02:23 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/26 10:57:52 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

/*
void *ft_memmove(void *dst, void *src, size_t len)
{
}*/

int	main()
{
	char str1[] = "mtho";
	char str2[] = "nzolo";

	printf("%s\n",memmove(str2,str1,5));
	return (0);
}
