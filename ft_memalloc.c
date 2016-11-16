/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:49:51 by vcarbone          #+#    #+#             */
/*   Updated: 2016/11/16 14:49:55 by vcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void *zdm;

	zdm = malloc(sizeof(void*) * size);
	if (!zdm)
		return (NULL);
	ft_bzero(zdm, size);
	return (zdm);
}
