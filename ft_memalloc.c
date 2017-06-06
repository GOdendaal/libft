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
#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *a;

	a = malloc(sizeof(size) * (size + 1));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	else
		return (a);
}
