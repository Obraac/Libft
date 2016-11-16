/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:59:49 by vcarbone          #+#    #+#             */
/*   Updated: 2016/11/16 17:12:32 by vcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*cf;

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
