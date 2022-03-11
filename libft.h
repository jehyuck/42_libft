#ifndef LIBFT_H
# define FIBFT_H

#include <unistd.h>
#include <stdlib.h>

int ft_islower(int c);
int ft_isupper(int c);
void ft_bzero(void *s, size_t n);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_strncmp();
int ft_strlcpy();
int ft_strlcat();
int ft_strrchr();
int ft_strnstr();
int ft_strlen(char *s);
void *ft_memset(void *s, int c, size_t n);
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int ft_strlcat();
char *ft_strchr(const char *s, int c);
int ft_strrchr();
void *ft_memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
int ft_strnstr();
int ft_atoi();
void *calloc(size_t nelem, size_t elsize);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strtrim(char const *s1, char const *set);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

#endif