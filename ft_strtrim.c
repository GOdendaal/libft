/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:54:44 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:54:46 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static	void	ft_strcpyaltc(char *dest, char *src, int s, int e)
{
	int i;

	i = 0;
	while (s <= e)
	{
		dest[i] = src[s];
		s++;
		i++;
	}
	dest[i] = '\0';
}

char			*ft_strtrim(char *s)
{
	unsigned int	i;
	char			*out;
	unsigned int	c;

	c = 0;
	i = 0;
	while (s[i])
		c++;
	while (s[i] == ' ' && s[i])
		i++;
	while (s[c - 1] == ' ' && c > i)
		c--;
	out = ft_memalloc((c + 1) - (i - 1));
	if (!out)
		return (NULL);
	ft_strcpyaltc(out, s, i, c);
	return (out);
}
