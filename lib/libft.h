/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 20:51:25 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/08 15:27:46 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# define CHECK	!line || fd < 0 || BUFF_SIZE < 1 || read(fd, NULL, 0) < 0
# define JOIN_CLEAN	clean = ln1; ln1 = ft_strjoin(ln1, buf); free(clean);
# define JOIN clean = ln1; ln1 = ft_strjoin(ln1, part_before_n);
# define CLEAN	free(clean); free(part_before_n);
# define BUFF_SIZE	1042

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_ls{
	int				fd;
	char			*data;
	struct s_ls		*next;
}					t_ls;

int					gnl(const int fd, char **line);
int					ft_sqrt(int nb);
void				ft_div_mod(int a, int b, int *div, int *mod);
void				ft_is_negative(int n);
void				ft_swap(int *a, int *b);
int					ft_atoi_long(int b, int c, int r);
int					ft_intlen(long int nb);
char				*ft_strndup(const char *str, size_t n);
int					ft_words(char *s, char c);
void				*ft_memset(void *sr, int c, size_t n);
void				ft_bzero(void *str, size_t n);
void				*ft_memcpy(void *d, const void *s, size_t n);
void				*ft_memccpy(void *d, const void *s, int c, size_t n);
size_t				ft_strlen(const char *str);
void				*ft_memmove(void *d, const void *s, size_t n);
void				*ft_memchr(const void *s, int cc, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strdup(const char *str);
char				*ft_strcpy(char *d, const char *s);
char				*ft_strncpy(char *d, const char *s, size_t n);
char				*ft_strcat(char *d, const char *a);
char				*ft_strncat(char *d, const char *a, size_t n);
size_t				ft_strlcat(char *d, const char *a, size_t n);
char				*ft_strchr(const char *s, int b);
char				*ft_strrchr(const char *s, int b);
char				*ft_strstr(const char *a, const char *b);
char				*ft_strnstr(const char *a, const char *b, size_t l);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int a);
int					ft_isdigit(int a);
int					ft_isalnum(int a);
int					ft_isascii(int a);
int					ft_isprint(int a);
int					ft_toupper(int a);
int					ft_tolower(int a);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **d);
void				*ft_strnew(size_t size);
void				ft_strdel(char **s);
void				ft_strclr(char *s);
void				ft_striter(char *s, void(*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				**ft_strsplit(const char *s, char c);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_itoa(int nbr);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					*ft_intjoin(int *s1, int *s2);
#endif
