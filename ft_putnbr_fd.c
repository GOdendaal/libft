/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:55:59 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:56:03 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ritoa(int n, int fd)
{
	int rem;

	if (n > 0)
	{
		rem = n % 10;
		ritoa(n / 10, fd);
		ft_putchar_fd((rem > 9) ? (rem - 10) + 'a' : (rem + '0'), fd);
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	ritoa(n, fd);
}
