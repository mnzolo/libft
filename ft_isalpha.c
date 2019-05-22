/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:07:21 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/22 09:40:09 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int	ft_isalpha(int c)
{
	if( (unsigned char)c >= 'A' &&(unsigned char)c <= 'Z' && (unsigned char)c >= 'a' && (unsigned char)c <= 'z')
	{
		return(1);
	}
	else
	return(0);
}
