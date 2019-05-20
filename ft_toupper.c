/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:57:27 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/20 10:39:32 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int		ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return(c);
}

int  main()
{
	ft_putchar(ft_toupper('a'));
	return(0);
}
