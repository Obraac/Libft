/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:58:35 by vcarbone          #+#    #+#             */
/*   Updated: 2016/11/16 15:23:38 by vcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*cf;

	i = 0;
	cf = malloc(sizeof(char const*) * ft_strlen(s));
	while (s[i] != '\0')
	{
		cf[i] = f(i, s[i]);
		i++;
	}
	return (cf);
}
