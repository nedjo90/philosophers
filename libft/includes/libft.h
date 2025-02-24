/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <nhan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:21:47 by nhan              #+#    #+#             */
/*   Updated: 2025/02/07 06:03:21 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "get_next_line.h"
# include <ctype.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

// LIMITS

# define CHAR_BIT 8
# define SCHAR_MIN -128
# define SCHAR_MAX +127
# define UCHAR_MAX 255
# define CHAR_MIN -128
# define CHAR_MAX +127
# define MB_LEN_MAX 16
# define SHRT_MIN -32768
# define SHRT_MAX +32767
# define USHRT_MAX 65535
# define INT_MIN -2147483648
# define INT_MAX +2147483647
# define UINT_MAX 4294967295
# define LONG_MIN -9223372036854775808
# define LONG_MAX +9223372036854775807
# define ULONG_MAX 18446744073709551615

// structure
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_memory
{
	void			*address;
	struct s_memory	*next;
}					t_m;
// fonction

int					ft_abs(int x);
double				ft_atodbl(char *s);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_atoi(const char *str);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_lstsize(t_list *lst);
int					ft_putchar_fd(char c, int fd);
int					ft_putstr_fd(char *s, int fd);
int					ft_putnbr_fd(int n, int fd);
int					ft_begin_with(const char *s, const char *p);
int					ft_end_with(const char *s, const char *p);
char				*ft_strrev(char *input);
char				*ft_ulong_to_hex(unsigned long number);
char				*ft_uint_to_str(unsigned int number);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char				*ft_strdup(const char *s1);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjointab(char **tab, char *sep);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				**ft_split(char const *s, char c);
char				**ft_split_str(char *s, char *sep);
char				**ft_free_tab(char **tab);
size_t				ft_strlen(const char *s);
size_t				ft_count_word(char const *s, char c);
size_t				ft_count_word_str(const char *s, const char *sep);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putendl_fd(char *s, int fd);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				ft_display_tab(char **tab);
long int			ft_atol(const char *str);
long int			ft_labs(long int x);

#endif
