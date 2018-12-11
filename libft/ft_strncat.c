/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argonthi <argonthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 11:34:59 by argonthi          #+#    #+#             */
/*   Updated: 2018/10/31 16:48:38 by argonthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *s;

	s = s1;
	while (*s != '\0')
	{
		s++;
	}
	while (n != 0 && (*s = *s2++) != '\0')
	{
		n--;
		s++;
	}
	if (*s != '\0')
		*s = '\0';
	return (s1);
}