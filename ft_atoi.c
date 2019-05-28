/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:56:26 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/27 09:49:53 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	else 
		return (0);
}

int		ft_atoi(const char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 1;
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' )
		{
			i++;
		}
		
		if( str[i] == '-')
			neg = neg * -1;
		
		if ( str[i] == '-' || str[i] == '+')
			i++;
		res = 0;
		while(ft_isdigit(str[i]))
		{
			res = res * 10 + (str[i] - '0');
			i++;
		}
	return(res * neg);
}

int main(void)
{
    int i;
    char *s;
 
    s = " -9885";
    i = ft_atoi(s);     /* i = -9885 */
 
    printf("i = %d\n",i);
}

