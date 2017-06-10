/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 09:26:38 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/28 09:47:21 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ritoa(int n)
{
	int rem;

	if (n > 0)
	{
		rem = n % 10;
		ritoa(n / 10);
		ft_putchar((rem > 9) ? (rem - 10) + 'a' : (rem + '0'));
	}
}

void			ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	ritoa(n);
}
