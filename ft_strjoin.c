/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: godendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:54:24 by godendaa          #+#    #+#             */
/*   Updated: 2017/05/29 19:54:26 by godendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*out;
	int		sl1;
	int		sl2;

	sl1 = ft_strlen(s1);
	sl2 = ft_strlen(s2);
	out = (char*)ft_memalloc(sizeof(char) * (sl1 + sl2 + 1));
	if (out == NULL)
		return (NULL);
	out = ft_strcpy(out, s1);
	out = ft_strcat(out, s2);
	out[strlen(out)] = '\0';
	return (out);
}
