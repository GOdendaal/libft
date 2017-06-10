/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:04:09 by godendaa          #+#    #+#             */
/*   Updated: 2017/06/10 02:38:48 by tmaclach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *str, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)str)[i] = 0;
		i++;
	}
}
