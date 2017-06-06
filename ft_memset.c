/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 20:59:20 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/30 08:41:11 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	
	i = 0;
	while (i < len)
	{
		(unsigned char*(b))[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
