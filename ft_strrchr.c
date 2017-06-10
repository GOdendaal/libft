/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:50:36 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:50:38 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static	void		ft_strcpyalt(char *dest, const char *src, int i)
{
	int c;

	c = 0;
	while (src[i])
	{
		dest[c] = src[i];
		i++;
		c++;
	}
	dest[c] = '\0';
}

char				*ft_strrchr(const char *src, int c)
{
	int			i;
	char		s;
	size_t		size;
	char		*out;

	i = 0;
	s = c + '0';
	while (src[i])
		i++;
	size = i + 1;
	while (i >= 0)
	{
		if (src[i] == s)
		{
			if (!(out = (char*)malloc(sizeof(char) * (size - i))))
				return (NULL);
			ft_strcpyalt(out, src, i);
			return (out);
		}
		i--;
	}
	return (NULL);
}
