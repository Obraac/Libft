#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int len;
	char *s2;
	
	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	s2 = malloc(sizeof(char*) * (len + 1));
	ft_strcpy(s2, s1);
	return (s2);
}
