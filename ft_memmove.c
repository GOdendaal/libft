/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:42:21 by godendaa          #+#    #+#             */
/*   Updated: 2017/06/10 03:48:45 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *psrc;
	unsigned char *pdst;

	psrc = (unsigned char*)src;
	pdst = (unsigned char*)dst;
	while ((int)--len >= 0)
	{
		if (psrc < pdst)
			*(pdst + len) = *(psrc + len);
		else
			*(pdst++) = *(psrc++);
	}
	return (dst);
}
