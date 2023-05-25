/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:01:03 by castorga          #+#    #+#             */
/*   Updated: 2023/05/09 12:01:06 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT2_H
# define LIBFT2_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int		ft_isalpha2(int arg);
int		ft_isdigit2(int num);
int		ft_isalnum2(int c);
int		ft_isascii2(int c);
int		ft_isprint2(int c);
size_t	ft_strlen2(const char *s);
void	*ft_memset2(void *b, int c, size_t len);
void	ft_bzero2(void *s, size_t n);
void	*ft_memcpy2(void *dst, const void *src, size_t n);
void	*ft_memmove2(void *dst, const void *src, size_t len);
size_t	ft_strlcpy2(char *dst, const char *src, size_t size);
size_t	ft_strlcat2(char *dst, const char *src, size_t size);
int		ft_toupper2(int c);
int		ft_tolower2(int c);
char	*ft_strchr2(const char *s, int c);
char	*ft_strrchr2(const char *s, int c);
int		ft_strncmp2(const char *s1, const char *s2, size_t n);
void	*ft_memchr2(const void *s, int c, size_t n);
int		ft_memcmp2(const void *s1, const void *s2, size_t n);
char	*ft_strnstr2(const char *haystack, const char *needle, size_t len);
int		ft_atoi2(const char *str);
void	*ft_calloc2(size_t count, size_t size);
char	*ft_strdup2(const char *s1);
char	*ft_substr2(char const *s, unsigned int start, size_t len);
char	*ft_strjoin2(char const *s1, char const *s2);
char	*ft_trim_space2(char *str);

#endif
