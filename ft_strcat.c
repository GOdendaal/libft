/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 00:18:21 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:41:23 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest,const char *src)
{
	int i;
	int c;
	int size;

	i = 0;
	c = 0;
	while (dest[i])
		i++;
	while (src[c])
		c++;
	size = i + c;
	c = 0;
	while (i < size && src[c])
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
