/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 09:17:31 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/27 09:17:35 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char const *s1, char const *s2)
{
	int i;
	int ia;
	int ba;

	i = 0;
	ia = 0;
	ba = 0;
	while (s1[i])
	{
		ia += s1[i] + '0';
		i++;
	}
	i = 0;
	while (s2[i])
	{
		ba += s2[i] + '0';
		i++;
	}
	if (ia > ba)
		return (1);
	else if (ia < ba)
		return (-1);
	else
		return (0);
}
