/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:54:17 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:54:19 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strsub(const char *s, unsigned int i, size_t len)
{
	char	*out;
	size_t	st;

	st = 0;
	if (!(out = (char*)ft_memalloc(len)))
		return (NULL);
	while (st < len)
	{
		out[st] = s[i];
		st++;
		i++;
	}
	out[st] = '\0';
	return (out);
}
