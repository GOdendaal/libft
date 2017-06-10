/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:50:44 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:50:46 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <string.h>

static	int				isinh(const char *h, const char *n, int s)
{
	int i;

	i = 0;
	while (n[i] && h[s])
	{
		if (n[i] != h[s])
			return (0);
		i++;
		s++;
	}
	return (1);
}

static	char			*strcpyalt(char *dest, const char *src, int s)
{
	int i;

	i = 0;
	while (src[s])
	{
		dest[i] = src[s];
		i++;
		s++;
	}
	return (dest);
}

char					*ft_strstr(const char *h, const char *n)
{
	size_t		i;
	size_t		s;
	char		*out;

	i = 0;
	while (h[i])
	{
		if (h[i] == n[0])
		{
			s = i;
			if (isinh(h, n, s))
			{
				while (h[i])
					i++;
				if(!(out = (char*)malloc(sizeof(char) * (i + 1))))
					return (NULL);
				out = strcpyalt(out, h, s);
				out[sizeof(out) + 1] = '\0';
			}
		}
		i++;
	}
	return (NULL);
}
