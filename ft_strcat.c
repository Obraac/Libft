#include "libft.h"
#include <string.h>

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	size_t len;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0')
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
 }

 int	main(int argc, char **argv)
 {
	if (argc == 3)
	{
		ft_putstr(ft_strcat(argv[1], argv[2]));
		ft_putchar('\n');
		ft_putstr(strcat(argv[1], argv[2]));
	}
	return (0);
}
