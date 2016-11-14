/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 18:41:27 by vcarbone          #+#    #+#             */
/*   Updated: 2016/11/14 19:02:24 by vcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	while (*big != '\0')
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
