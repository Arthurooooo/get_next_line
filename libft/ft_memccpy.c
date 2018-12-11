/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argonthi <argonthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 11:34:36 by argonthi          #+#    #+#             */
/*   Updated: 2018/10/31 16:42:16 by argonthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*newdst;
	unsigned char	*newsrc;

	newdst = (unsigned char*)dst;
	newsrc = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		newdst[i] = newsrc[i];
		if (newdst[i] == (unsigned char)c)
			return ((unsigned char*)(newdst + (i + 1)));
		i++;
	}
	return (NULL);
}
