/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:42:24 by vcarbone          #+#    #+#             */
/*   Updated: 2016/11/16 17:39:39 by vcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	b;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	b = (unsigned char)c;
	i = 0;
	while (i < n && s[i] != b)
	{
		d[i] = s[i];
		i++;
	}
	if (s[i] != b)
		return (NULL);
	i++;
	return (&d[i]);
}
