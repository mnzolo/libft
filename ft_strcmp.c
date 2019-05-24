/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:47:36 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/24 16:47:12 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
int main()
{
    char *s1 = "hello";
    char *s2 = "world";
 
    printf("Address of string pointed by s1 = %s\n", s1);
    printf("Address of string pointed by s2 = %s\n\n", s2);
 
    printf("Is s1 == s2 ? %u\n", s1 == s2);
    printf("Is s1 > s2 ? %u\n", s1 > s2);
    printf("Is s1 < s2 ? %u\n", s1 < s2);
 
    // signal to operating system program ran fine
    return 0;
}

