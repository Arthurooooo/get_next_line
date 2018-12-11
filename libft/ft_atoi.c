/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argonthi <argonthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 11:34:21 by argonthi          #+#    #+#             */
/*   Updated: 2018/10/31 16:44:29 by argonthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int	nbr;
	int sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')\
	|| (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nbr = ((nbr * 10 + str[i]) - 48);
		i++;
	}
	return (sign * nbr);
}
