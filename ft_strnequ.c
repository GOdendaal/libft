/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:52:58 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:53:00 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_sort(char *src, size_t len)
{
	size_t	i;
	size_t	j;
	char	temp;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (src[i] > src[j])
			{
				temp = src[i];
				src[i] = src[j];
				src[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int				ft_strnequ(const char *s1, const char *s2, size_t n)
{
	char *ss1;
	char *ss2;

	ss1 = (char*)ft_memalloc(ft_strlen(s1));
	ss2 = (char*)ft_memalloc(ft_strlen(s2));
	ss1 = ft_strcpy(ss1, s1);
	ss2 = ft_strcpy(ss2, s2);
	ft_sort(ss1, ft_strlen(ss1));
	ft_sort(ss2, ft_strlen(ss2));
	if (ft_strncmp(ss1, ss2, n) == 0)
		return (1);
	return (0);
}
