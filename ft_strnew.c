#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *cdc;

	cdc = malloc(sizeof(char*) * size);
	if (!cdc)
		return (NULL);
	ft_strclr(cdc);
	return (cdc);
}
