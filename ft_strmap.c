#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char(*f)(char))
{
	int i;
	char *cf;

	i = 0;
	cf = malloc(sizeof(char const*) * ft_strlen(s));
	while (s[i] != '\0')
	{
		cf[i] = f(s[i]);
		i++;
	}
	return (cf);
}
