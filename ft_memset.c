/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 20:59:20 by godendaa          #+#    #+#             */
/*   Updated: 2017/06/10 02:36:32 by tmaclach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t i;
	
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			(unsigned char*(str))[i] = (unsigned char)c;
			i++;
		}
	}
	return (str);
}
