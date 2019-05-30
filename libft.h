/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:11:23 by mnzolo            #+#    #+#             */
/*   Updated: 2019/05/29 16:56:30 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memalloc(size_t size);
void			*ft_memccpy(const void *dst, void *src, int c, size_t n);
void			*ft_memchr(void *s, int c, size_t n);
int				ft_memcmp(void *s1, void *s2, size_t n);
void			*ft_memcpy(void *dst, void *src, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
char			*ft_strcat(char *s1, char *s2);
char			*ft_strchr(char *s, int c);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(const char *s1);
int				ft_strequ(char *s1, char *s2);
char			*ft_strjoin(char *s1, char *s2);
size_t			ft_strlcat(char *dst, char *src, size_t dstsize);
int				ft_strlen(const char *s);
char			*ft_strncat(char *s1, char *s2, size_t n);
int				ft_strncmp(char *s1, char *s2, size_t n);
char			*ft_strncpy(char *dest, char *src, size_t len);
char			*ft_strnstr(char *haystack, char *needle, size_t len);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strrchr(char *s, int c);
char			*ft_strstr(char *haystack, char *needle);
char			ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strsub(char *s, unsigned int start, size_t len);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char	const *s, char (*f)(char));

#endif
