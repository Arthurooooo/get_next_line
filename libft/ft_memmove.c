/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argonthi <argonthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 11:34:44 by argonthi          #+#    #+#             */
/*   Updated: 2018/10/31 16:39:40 by argonthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*newdst;
	unsigned char	*newsrc;

	newdst = (unsigned char *)dst;
	newsrc = (unsigned char *)src;
	if (newsrc < newdst)
		while (len--)
			newdst[len] = newsrc[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
