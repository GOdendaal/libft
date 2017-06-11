/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 23:58:49 by godendaa          #+#    #+#             */
/*   Updated: 2017/06/10 03:50:31 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int i;

	i = 0;
	len++;
	while (--len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (len--)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
