/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:54:54 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:56:35 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static	size_t		ft_wc(const char *s, char c)
{
	size_t i;
	size_t wc;

	i = 0;
	wc = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			wc++;
		}
		i++;
	}
	return (wc);
}

char				**ft_strsplit(const char *s, char c)
{
	unsigned int	i;
	char			**out;
	int				wp;
	size_t			len;

	len = 0;
	wp = 0;
	i = 0;
	if (!s || !(out = (char**)ft_memalloc(sizeof(char*) * (ft_wc(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		len = i;
		while (s[i] != c && s[i])
			i++;
		if ((out[wp] = ft_strsub(s, len, i - len)))
			wp++;
	}
	out[wp] = NULL;
	return (out);
}
