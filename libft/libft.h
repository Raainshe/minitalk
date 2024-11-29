/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:05:55 by rmakoni           #+#    #+#             */
/*   Updated: 2024/11/27 14:49:05 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

/* INT Return Functions */
// Character Type Checks
int					ft_isalpha(int c);
int					ft_isdigit(int num);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);

// Character Transformations
int					ft_toupper(int c);
int					ft_tolower(int c);

// String Comparisons
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_atoi(const char *str);

/* SIZE_T Return Functions */
size_t				ft_strlen(const char *c);
size_t				ft_strlcpy(char *dest, const char *src, size_t dst_size);
size_t				ft_strlcat(char *dest, char *src, size_t dest_size);

/* CHAR* Return Functions */
// String Searches
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);

// String Manipulations
char				*ft_substr(const char *s, unsigned int start, size_t len);
char				*ft_strdup(const char *str);
char				*ft_strtrim(const char *s1, char const *set);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_itoa(int n);
char				*ft_strjoin(char const *s1, char const *s2);
char				**ft_split(const char *s, char c);

/* VOID* Return Functions */
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memset(void *str, int c, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *ptr, int c, size_t num);
void				*ft_calloc(size_t num, size_t size);

/* VOID Return Functions */
// Memory Operations
void				ft_bzero(void *s, size_t n);

// File Descriptors
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

// String Modifications
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

/* Linked List Struct */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* T_LIST* Return Functions */
t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
int					ft_lstsize(t_list *lst);
/* VOID Return List Functions */
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));

#endif