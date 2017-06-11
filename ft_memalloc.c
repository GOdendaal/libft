/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 22:08:42 by godendaa          #+#    #+#             */
/*   Updated: 2017/06/10 03:54:58 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*len;

	len = (unsigned char*)malloc(sizeof(char) * size);
	if (len == NULL)
		return (NULL);
	return (ft_memset(len, 0, size));
}
