/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 22:08:42 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/26 22:17:10 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *out;

	out = malloc(sizeof(size) * (size + 1));
	if (out == NULL)
	{
		free(out);
		out = NULL;
	}
	return (out);
}
