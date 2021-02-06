/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:45:58 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/10 02:45:51 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_isalnum(int ch);
int		ft_isalpha(int c);
int		ft_isascii(int ch);
int		ft_isdigit(int c);
int		ft_isprint(int ch);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
int		ft_atoi(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memset(void *dest, int c, size_t n);
void	ft_bzero(void *str, size_t n);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int ch);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t bytes);
void	*ft_memchr(const void *arr, int c, size_t bytes);
int		ft_memcmp(const void *arr1, const void *arr2, size_t bytes);
void	*ft_memmove(void *dest, const void *source, size_t bytes);
int		ft_strncmp(const char *dest, const char *source, size_t bytes);
void	*ft_memccpy(void *dest, const void *sourse, int ch, size_t	bytes);
char	*ft_strrchr(const char *str, int ch);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strnstr(const char *str1, const char *str2, size_t len);
void	ft_putendl_fd (char *s, int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);

#endif
