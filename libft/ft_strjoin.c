/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argonthi <argonthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 21:18:00 by argonthi          #+#    #+#             */
/*   Updated: 2018/12/03 23:42:21 by argonthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;
	int		a;
	int		b;

	a = 0;
	b = 0;
	if (s1)
		a = ft_strlen(s1);
	if (s2)
		b = ft_strlen(s2);
	i = a + b;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	return (str);
}
