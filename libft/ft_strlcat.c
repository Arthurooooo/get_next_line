/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argonthi <argonthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 11:34:56 by argonthi          #+#    #+#             */
/*   Updated: 2018/10/30 23:51:28 by argonthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = ft_strlen(src);
	while (dst[i] && i < dstsize)
		i++;
	if (i != dstsize)
	{
		j = 0;
		while (src[j] && j < dstsize - i - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (i + k);
}
