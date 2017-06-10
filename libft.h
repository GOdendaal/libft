/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 07:58:26 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/28 09:45:48 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long size_t;

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
int		ft_strlen(const char *src);
char	*ft_strcat(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
void	*ft_memalloc(size_t size);
char	*ft_strncpy(char *dest, const char *s, size_t len);
char	*ft_strsub(const char *s, unsigned int i, size_t len);
int		ft_atoi(char *src);
void	ft_bzero(void *str, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memset(void *str, int c, size_t n);
void	ft_putendl(char const *s);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(const char *c);
void	ft_putstr_fd(const char *s, int fd);
char	*ft_strchr(char *src, int c);
void	ft_strclr(char *s);
void	ft_strdel(char **as);
char	*ft_strdup(char *s1);
int		ft_strequ(const char *s1, const char *s2);
void	ft_striter(char *s, void (*f)(char*));
void	ft_memdel(void **ap);
char	*ft_strmap(const char *s, char (*f)(char));
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strnew(size_t size);
char	*ft_strrchr(char *src, int c);
char	**ft_strsplit(const char *s, char c);
char	*ft_strstr(const char *h, const char *n);
char	*ft_strtrim(char *s);
void	ft_tolower(char *src);
void	ft_toupper(char *src);
void	ft_strclr(char *s);
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memmove(void *s1, const void *s2, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t	ft_strlcat(char *dest, const char *src, size_t n);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strnequ(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *h, const char *n, size_t len);
char	*ft_strsub(const char *s, unsigned int i, size_t n);

#endif
