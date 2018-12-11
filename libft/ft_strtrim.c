/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argonthi <argonthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 21:53:28 by argonthi          #+#    #+#             */
/*   Updated: 2018/10/31 12:14:40 by argonthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
		i++;
	j = ft_strlen(s) - 1;
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j != 0)
		j--;
	if ((i == 0 && ft_strlen(s) == 0) || j == 0)
		return (ft_strdup(""));
	if (!(str = (char *)malloc(sizeof(char) * (j - i) + 2)))
		return (NULL);
	k = 0;
	while (k <= (j - i))
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
