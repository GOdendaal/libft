/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:53:06 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:53:08 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	ft_strdel(char **as)
{
	int i;
	int j;

	i = 0;
	while (as[i])
	{
		j = 0;
		while (as[i][j])
		{
			as[i][j] = '\0';
			j++;
		}
		as[i] = NULL;
		i++;
	}
	free(as);
}
