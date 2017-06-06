/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:11:04 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/30 08:42:00 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i]);
			i++;
		}
	}
	return (dst);
}
