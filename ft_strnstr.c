/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:50:52 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:50:54 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static	int			isinh(const char *h, const char *n, size_t i, size_t len)
{
	size_t c;

	c = 0;
	while (c < len && h[i])
	{
		if (n[c] != h[i])
			return (0);
		c++;
		i++;
	}
	return (1);
}

static	char		*strcpyalt(char *dest, const char *src, size_t s)
{
	int i;

	i = 0;
	while (src[s])
	{
		dest[i] = src[s];
		i++;
		s++;
	}
	dest[i] = '\0';
	return (dest);
}

char				*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t		i;
	char		*out;

	i = 0;
	while (h[i])
	{
		if (h[i] == n[0])
		{
			if (isinh(h, n, i, len))
			{
				if(!(out = (char*)ft_memalloc((ft_strlen(h) - i))))
					return (NULL);
				out = strcpyalt(out, h, i);
				return (out);
			}
		}
		i++;
	}
	return (NULL);
}
