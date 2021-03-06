/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lft_string.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperson- <lperson-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 14:18:29 by lperson-          #+#    #+#             */
/*   Updated: 2020/02/06 14:44:12 by lperson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LFT_STRING_H

# define LFT_STRING_H

# include <stddef.h>

void	*ft_memset(void *s, int c, size_t len);
void	ft_bzero(void *s, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memccpy(void *dst, const void *src, int c, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *src, int c, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	ft_crealloc(void **s, size_t old_size, size_t new_size);
void	*ft_memdup(const void *s, size_t len);
void	*ft_memdel(void **s);
int		ft_strdel(char **str);
size_t	ft_strlen(const char *s);
size_t	ft_strnlen(const char *s, size_t n);
size_t	ft_strclen(char const *s, char const *charset);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strndup(const char *s, size_t n);
char	*ft_strcdup(const char *s, char const *charset);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strcjoin(char const *s1, char const *s2, char const *charset);
char	*ft_strtrim(char const *s, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_append_buffer(char **buffer, char *str);
char	*ft_strjoin_sep(char const *s1, char const *s2, char sep);
void	ft_free2d_tab(char **tab, size_t len);
size_t	ft_len2d_tab(char *tab[]);
char	**ft_dup2d_tab(char *tab[]);

#endif
