/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:52:39 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:52:41 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	ft_memdel(void **ap)
{
	int i;

	i = 0;
	while (ap[i])
	{
		free(ap[i]);
		i++;
	}
	free(ap);
	ap = NULL;
}
