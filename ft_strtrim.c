#include "libft.h"
#include <stdlib.h>
#include <string.h>

char *ft_strtrim(char const *s)
{
	char *cf;
	int i;
	int j;
	size_t len;

	i = 0;
	j = 0;
	len = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = i;
	while (s[i] != ' ' && s[i] != '\n' && s[i] != '\t' && s[i] != '\0')
		i++;
	len = i - j;
	cf = ft_strsub(s, j, len);
	return (cf);
}
