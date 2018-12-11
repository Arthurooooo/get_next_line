/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argonthi <argonthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 11:34:02 by argonthi          #+#    #+#             */
/*   Updated: 2018/10/31 15:05:28 by argonthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t len;

	if (*needle == '\0')
		return (char *)haystack;
	len = ft_strlen(needle);
	while ((haystack = ft_strchr(haystack, *needle)) != NULL)
	{
		if (ft_memcmp(haystack, needle, len) == 0)
			return (char *)haystack;
		haystack++;
	}
	return (NULL);
}
