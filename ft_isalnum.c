/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 22:55:41 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/26 22:58:12 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((char)c >= 'a' && (char)c <= 'z')
		return (1);
	else if ((char)c >= 'A' && (char)c <= 'Z')
		return (1);
	if (c > 9 || c < 0)
		return (0);
	if ((char)c >= '0' && (char)c <= '9')
		return (1);
	return (0);
}
