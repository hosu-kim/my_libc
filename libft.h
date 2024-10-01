/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:22:01 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/30 17:22:01 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H // if not defined: to prevent header duplication(complie error)
# define LIBFT_H // header define
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list // define the struct
{
    void *content; // points to any type of data
    struct s_list *next;
}   t_list; // define an alias

void ft_bzero(void *s, size_t n);

// Character checks and conversions
int	ft_atoi(const char *str);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char *ft_itoa(int n);
int ft_tolower(int c);
int ft_toupper(int c);

// Memory manipulation
void *ft_calloc(size_t num, size_t size);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest_str, const void *src_str, size_t n);
void *ft_memmove(void *dest_str, const void *src_str, size_t n_bytes);
void *ft_memset(void *pointer, int value, size_t number);

// Input/output
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);

// String handling
char **ft_split(char const *s, char c);
char *strchr(const char *s, int c);
char *strdup(const char *str);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
int ft_strlen(const char *s);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);

#endif