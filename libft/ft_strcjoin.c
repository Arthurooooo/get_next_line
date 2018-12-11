/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argonthi <argonthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 22:58:14 by argonthi          #+#    #+#             */
/*   Updated: 2018/12/03 23:52:42 by argonthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strcjoin(char const *s1, char const *s2, int c)
{
	int		i;
	char	*str;
	int		a = 0;
	int		b = 0;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	i = a + b;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str = ft_strcpy(str, s1);
	str = ft_strccat(str, s2, c);
	return (str);
}
