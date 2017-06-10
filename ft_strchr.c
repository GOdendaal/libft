/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:50:21 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:50:23 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static	void	ft_strcpyalt(char *dest, const char *src, int i)
{
	int c;

	c = 0;
	while (src[i])
	{
		dest[c] = src[i];
		c++;
		i++;
	}
}

char			*ft_strchr(const char *src, int c)
{
	int		i;
	char	s;
	char	*out;
	int		size;

	i = 0;
	size = 0;
	s = c + '0';
	while (src[size])
		size++;
	while (src[i])
	{
		if (src[i] == s)
		{
			out = (char*)malloc(sizeof(char) * (size - i + 1));
			ft_strcpyalt(out, src, i);
			return (out);
		}
		i++;
	}
	return (NULL);
}
