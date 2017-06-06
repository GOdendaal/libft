/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 22:37:28 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:52:02 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalpha(int c)
{
	if ((unsigned char)c >= "a" && (unsigned char)c <= "z")
		return (1);
	if ((unsigned char)c >= "A" && (unsigned char)c <= "Z")
		return (1);
	else
		return (0);
}
