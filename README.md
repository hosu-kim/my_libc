# my_libc
## Overview
`my_libc` is a personal library written in the C programming language. This library provides a variety of useful functions that can be reused when writing C programs.
## File Structure
`my_libc.h`: The header file of the library, containing all function and struct declarations.
`libft.a`: The compiled library file.
Various source files (`*.c`): Contains the implementation of each function.
##  Usage
### 1. Compiling the Library
You can compile the library using the following command:
```bash
make
```
This command will create the `libft.a` file
### 2. Using the Library in Your Project
To use the `my_libc` library in your project, compile it as follows:
```bash
gcc -Wall -Wextra -Werror -L. -lft your_program.c -o your_program
```
## Function List
### Here are the main functions included in the library:
### Character Checks and Conversions
- `int ft_atoi(const char *str);`
- `int ft_isalnum(int c);`
- `int ft_isalpha(int c);`
- `int ft_isascii(int c);`
- `int ft_isdigit(int c);`
- `int ft_isprint(int c);`
- `char *ft_itoa(int n);`
- `int ft_tolower(int c);`
- `int ft_toupper(int c);`
### Memory Manipulation
- `void ft_bzero(void *s, size_t n);`
- `void *ft_calloc(size_t num, size_t size);`
- `void *ft_memchr(const void *s, int c, size_t n);`
- `int ft_memcmp(const void *s1, const void *s2, size_t n);`
- `void *ft_memcpy(void *dest_str, const void *src_str, size_t n);`
- `void *ft_memmove(void *dest_str, const void *src_str, size_t n_bytes);`
- `void *ft_memset(void *pointer, int value, size_t number);`
### Input/Output
- `void ft_putchar_fd(char c, int fd);`
- `void ft_putendl_fd(char *s, int fd);`
- `void ft_putnbr_fd(int n, int fd);`
- `void ft_putstr_fd(char *s, int fd);`
## String Handling
- `char **ft_split(char const *s, char c);`
- `char *ft_strchr(const char *s, int c);`
- `char *ft_strdup(const char *str);`
- `void ft_striteri(char *s, void (*f)(unsigned int, char*));`
- `char *ft_strjoin(char const *s1, char const *s2);`
- `size_t ft_strlcat(char *dest, const char *src, size_t size);`
- `size_t ft_strlcpy(char *dest, const char *src, size_t size);`
- `int ft_strlen(const char *s);`
- `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
- `int ft_strncmp(const char *s1, const char *s2, size_t n);`
- `char *ft_strnstr(const char *big, const char *little, size_t len);`
- `char *ft_strrchr(const char *s, int c);`
- `char *ft_strtrim(char const *s1, char const *set);`
- `char *ft_substr(char const *s, unsigned int start, size_t len);`
## List Manipulation
- `t_list *ft_lstnew(void *content);`
- `void ft_lstadd_front(t_list **lst, t_list *new);`
- `int ft_lstsize(t_list *lst);`
- `t_list *ft_lstlast(t_list *lst);`
- `void ft_lstadd_back(t_list **lst, t_list *new);`
- `void ft_lstdelone(t_list *lst, void (*del)(void *));`
- `void ft_lstclear(t_list **lst, void (*del)(void *));`
- `void ft_lstiter(t_list *lst, void (*f)(void *));`
- `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`
## Contribution
If you want to contribute, fork the repository and submit a pull request. Bug reports and suggestions for improvement are welcome!
## License
This project is distributed under the MIT License. See the LICENSE file for more information.
