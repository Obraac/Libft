/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:59:28 by vcarbone          #+#    #+#             */
/*   Updated: 2016/11/16 15:24:59 by vcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

size_t	ft_len(char const *s, char c)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		len++;
		i++;
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	size_t	len;
	char	**cf;

	i = 0;
	j = 0;
	k = 0;
	len = ft_len(s, c);
	cf = malloc(sizeof(char const*) * len);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while (s[i] != c)
		{
			cf[j][k] = s[i];
			k++;
			i++;
		}
		j++;
	}
	return (cf);
}
