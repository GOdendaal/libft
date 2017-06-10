/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:55:02 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:55:04 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static	void	ft_reverse(char *src, int len)
{
	int		i;
	int		e;
	char	temp;

	e = len - 1;
	i = 0;
	while (i < e)
	{
		temp = src[i];
		src[i] = src[e];
		src[e] = temp;
		i++;
		e--;
	}
}

static	int		ft_isneg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char			*ft_itoa(int n)
{
	int		i;
	int		rem;
	char	*out;
	int		neg;

	i = 0;
	neg = ft_isneg(n);
	if (neg)
		n = -n;
	if (n == 0)
		return (NULL);
	out = (char*)ft_memalloc(sizeof(char) * (sizeof(n)));
	while (n != 0)
	{
		rem = n % 10;
		out[i++] = (rem > 9) ? (rem - 10) + 'a' : (rem + '0');
		n = n / 10;
	}
	if (neg)
	{
		out[i++] = '-';
	}
	out[i] = '\0';
	ft_reverse(out, i);
	return (out);
}

