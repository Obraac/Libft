
#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long int	size_t;
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
void	ft_putendl(char const *s);
char	*ft_strcpy(char *dst, const char *src);
size_t		ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *s1, const char *s2);

#endif
