/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:53:00 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/27 15:32:37 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strsub(char *s, unsigned int start, size_t len)
{
	size_t i;
	char *j;

	i = 0;
	j = (char *)malloc(sizeof(char)*(len + 1));
	while(s[i] != '\0' && i < len)
	{
		i++;
		if(s[i] == start)
		{
			return(s + i);
		}
	}
	return (NULL);
}
