/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:11:04 by godendaa          #+#    #+#             */
/*   Updated: 2017/06/10 03:48:15 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*ptrdst;
	const char		*ptrsrc;

	i = 0;
	ptrdst = dst;
	ptrsrc = src;
	while (i < n)
	{
		*ptrdst++ = *ptrsrc++;
		i++;
	}
	return (dst);
}
