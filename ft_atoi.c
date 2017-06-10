/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:40:51 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:40:53 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_atoi(char *src)
{
	int i;
	int out;
	int sign;

	i = 0;
	out = 0;
	sign = 1;
	while (src[i] == ' ' || src[i] == '\t' || src[i] == '\n')
		i++;
	if (src[i] == '-')
		sign = (src[i++] == '+') ? 1 : -1;
	while (src[i])
	{
		if (src[i] >= '0' && src[i] <= '9')
		{
			if ((out * 10) > out)
				out = (out * 10) + (src[i] - '0');
			else
				return (1 * sign);
		}
		else
			return (out * sign);
		i++;
	}
	return (out * sign);
}
