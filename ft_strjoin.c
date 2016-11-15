#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *cf;
	int len;

	len = ft_strlen(s1) + ft_strlen(s2);
	cf = malloc(sizeof(char const*) * (len + 1));
	cf = ft_strcat((char*)s1, s2);
	return (cf);
}
