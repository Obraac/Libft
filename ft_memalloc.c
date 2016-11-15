#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void *zdm;

	zdm = malloc(sizeof(void*) * size);
	if (!zdm)
		return (NULL);
	ft_bzero(zdm, size);
	return (zdm);
}
