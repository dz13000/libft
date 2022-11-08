#ifndef LIBFT_H
#define LIBFT_H

int ft_isprint(int nb);
int ft_isascii(int nb);
int ft_isalnum(int nb);
int ft_isdigit(int nb);
int ft_isalpha(int nb);
int ft_strlen(char *str);
int ft_tolower(int c);
int ft_toupper(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_atoi(char *str);
char    *ft_strdup(const char *str);
char *ft_itoa(int n);
void    ft_putchar_fd(char c, int fd);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strtrim(char const *s1, char const *set);
//char **ft_split(char const *s, char c);
//void *ft_calloc(size_t count, size_t size)
//int ft_memcmp(const void *s1, const void *s2, size_t n);
//void *ft_memset(void *b, int c, size_t len);
//void ft_bzero(void *s, size_t n);
//void *ft_memcpy(void *dest, const void *src, size_t n);
//void *ft_memmove(void *dest, const void *src, size_t n);
//void *ft_memchr(const void *s, int c, size_t n);


#endif