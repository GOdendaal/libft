/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:51:30 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:51:32 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	int			as1;
	int			as2;

	i = 0;
	as1 = 0;
	as2 = 0;
	while (i < n && s1[i] && s2[i])
	{
		as1 += s1[i] + '0';
		as2 += s2[i] + '0';
		i++;
	}
	if (as1 == as2)
		return (0);
	else if (as1 > as2)
		return (1);
	else
		return (-1);
}


