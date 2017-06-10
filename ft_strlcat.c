/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:43:13 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:43:15 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest,const char *src, size_t n)
{
	unsigned int i;
	unsigned int c;

	c = 0;
	i = 0;
	while (dest[i] && i < n)
		i++;
	c = i;
	while (i < n  && src[i - c])
	{
		dest[i] = src[i - c];
		i++;
	}
	dest[i] = '\0';
	return (c + ft_strlen(src));
}
