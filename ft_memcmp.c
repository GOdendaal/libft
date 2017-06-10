/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:42:41 by godendaa          #+#    #+#             */
/*   Updated: 2017/06/10 02:55:11 by tmaclach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	size_t is;
	size_t cs;

	i = 0;
	is = 0;
	cs = 0;
	while (i < n && ((unsigned char*)s1)[i] && ((unsigned char*)s2)[i])
	{
		is += ((unsigned char*)s1)[i] + '0';
		cs += ((unsigned char*)s2)[i] + '0';
		i++;
	}
	if (is > cs)
		return (1);
	else if (is < cs)
		return (-1);
	return (0);
}
