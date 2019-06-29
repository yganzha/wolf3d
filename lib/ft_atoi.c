/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 19:36:56 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/04 17:43:42 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int res;
	int i;
	int znak;
	int b;

	znak = 1;
	res = 0;
	i = 0;
	b = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		znak = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (!(str[i] <= '9' && str[i] >= '0'))
			return (res * znak);
		res = res * 10 + (str[i] - 48);
		b++;
		i++;
	}
	return (ft_atoi_long(b, znak, res));
}
