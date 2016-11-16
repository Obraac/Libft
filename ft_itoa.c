/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:49:35 by vcarbone          #+#    #+#             */
/*   Updated: 2016/11/16 15:21:42 by vcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_isneg(int n, int neg, int len, int nbr)
{
	if (n < 0)
	{
		n = n * -1;
		nbr = nbr * -1;
		neg = 1;
		len++;
	}
}

void	ft_strneg(char *str, int i)
{
	str[i] = '-';
	i++;
}

char	*ft_nbstr(int neg, char *str, int d, int n)
{
	int i;

	i = 0;
	if (neg == 1)
		ft_strneg(str, i);
	while (d >= 1)
	{
		str[i] = (n / d) + '0';
		i++;
		n = n % d;
		d = d / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		neg;
	int		nbr;
	int		d;
	int		len;

	neg = 0;
	nbr = n;
	d = 1;
	len = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_isneg(n, neg, len, nbr);
	while (nbr > 9)
	{
		d = d * 10;
		nbr = nbr / 10;
		len++;
	}
	str = malloc(sizeof(char*) * len);
	str = ft_nbstr(neg, str, d, n);
	return (str);
}
