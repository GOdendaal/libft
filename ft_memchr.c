/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:42:29 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/31 12:03:53 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static void	*ft_strcpyalts(void *dest, const void *src, size_t start);
{
	size_t i;

	i = 0;
	while (((unsigned char*)src)[start])
	{
		((unsigned char)dest)[i] = ((unsigned char*)src)[start];
		i++;
		start++;
	}
	return (dest);
}

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t 	i;
	void	*dest;
	size_t cc;

	i = 0;
	while (i < n && ((unsigned char *)str)[i])
	{
		if (((unsigned char*)str)[i] == (unsigned char)c)
		{
			cc = i;
			while (((unsigned char*)str)[cc])
				cc++;
			dest = ft_memalloc(cc);
			dest = ft_strcpyalts(dest, str, i);
			return (dest);
		}
		i++;
	}
	return (NULL);
}
