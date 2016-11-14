/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:56:11 by vcarbone          #+#    #+#             */
/*   Updated: 2016/11/14 18:13:44 by vcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dest_end;

	i = 0;
	dest_end = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	dest_end = i;
	i = 0;
	while (src[i] != '\0' && i < size)
		i++;
	return (dest_end + i);
}
