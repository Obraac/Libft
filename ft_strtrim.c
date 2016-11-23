/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:00:06 by vcarbone          #+#    #+#             */
/*   Updated: 2016/11/16 15:26:58 by vcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strtrim(char const *s)
{
	char	*cf;
	int		i;
	int		end;
	int		start;

	i = 0;
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (s[end] == ' ' && s[end] == '\n' && s[end] == '\t' && s[i] == '\0')
		end--;
	cf = malloc(sizeof(char) * (end - start + 1));
	if (!cf)
		return (NULL);
	while (start <= end)
	{
		cf[i] = s[start];
		i++;
		start++;
	}
	cf[i] = '\0';
	return (cf);
}
