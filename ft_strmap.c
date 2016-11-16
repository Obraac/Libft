/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:57:27 by vcarbone          #+#    #+#             */
/*   Updated: 2016/11/16 15:23:25 by vcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*cf;

	i = 0;
	cf = malloc(sizeof(char const*) * ft_strlen(s));
	while (s[i] != '\0')
	{
		cf[i] = f(s[i]);
		i++;
	}
	return (cf);
}
