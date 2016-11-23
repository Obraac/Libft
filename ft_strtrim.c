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
	int		end;
	int		start;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while ((s[start] == ' ' || s[start] == '\n' || s[start] == '\t') && s[start] != '\0')
		start++;
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t') && end >= 0)
		end--;
	if (end < start)
		return ("");
	return (ft_strsub(s, start, end - start + 1));
}
