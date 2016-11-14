/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 18:50:43 by vcarbone          #+#    #+#             */
/*   Updated: 2016/11/14 19:02:57 by vcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	while (*big != '\0' && len > (size_t)big)
	{
		while (*big != *little)
			big++;
		while (*big == *little)
		{
			big++;
			little++;
		}
		if (*little == '\0')
			return ((char *)big);
	}
	return (NULL);
}
