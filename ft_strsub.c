#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ftstrsub(char const *s, unsigned int start, size_t len)
{
	int i;
	char *cf;

	i = 0;
	cf = malloc(sizeof(char const*) * len);
	if (!cf)
		return (NULL);
	while (start < len)
	{
		cf[i] = s[start];
		i++;
		start++;
	}
	return (cf);
}
