/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:29:05 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/30 08:43:12 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			if ((unsigned char*)src[i] == (unsigned char)c)
			{
				((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
				return (dst);
			}
			else
			{
				((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			}
			i++;
		}
	}
	return (dst);
}
