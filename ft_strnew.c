/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:59:08 by vcarbone          #+#    #+#             */
/*   Updated: 2016/11/16 14:59:11 by vcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *cdc;

	cdc = malloc(sizeof(char*) * size);
	if (!cdc)
		return (NULL);
	ft_strclr(cdc);
	return (cdc);
}
