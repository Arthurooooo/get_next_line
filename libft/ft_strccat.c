/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argonthi <argonthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 23:23:30 by argonthi          #+#    #+#             */
/*   Updated: 2018/12/03 23:25:17 by argonthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strccat(char *s1, const char *s2, int c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != c && s2[j] != '\0')
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
