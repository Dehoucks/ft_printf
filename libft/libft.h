/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:59:46 by rdehouck          #+#    #+#             */
/*   Updated: 2021/12/08 12:42:47 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//includes
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_isalpha(int n);
int			ft_isdigit(int n);
int			ft_isalnum(int n);
int			ft_isascii(int n);
int			ft_isprint(int n);
size_t		ft_strlen(const char *str);
void		*ft_memset(void *buf, int c, size_t len);
void		ft_bzero(void *string, size_t byte_length);
void		*ft_memcpy(void *dest, const void *source, size_t bit_size);
void		*ft_memmove(void *dest, const void *src, size_t len);
size_t		ft_strlcpy(char *dest, const char *source, size_t length);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *source, int c);
char		*ft_strrchr(const char *source, int c);
int			ft_strncmp(const char *source1, const char *source2, size_t n);
void		*ft_memchr(const void *source, int c, size_t n);
int			ft_memcmp(const void *source1, const void *source2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_atoi(const char *number);
void		*ft_calloc(size_t nelements, size_t byte_size);
char		*ft_strdup(const char *source);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_itoa(int nb);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f) (unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
char		*ft_strtrim(char const *source, char const *set);
char		**ft_split(char const *s, char charset);
char		*ft_strjoin(char const *source1, char const *source2);

#endif