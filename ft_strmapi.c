#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	unsigned int i;
	char *cf;

	i = 0;
	cf = malloc(sizeof(char const s*) * ft_strlen(s));
	while (s[i] != '\0')
	{
		cf[i] = f(i, s[i]);
		i++;
	}
}
