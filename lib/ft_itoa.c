/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:30:30 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/04 17:52:32 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	long	int	ft_ascii(long int nb)
{
	return (nb < 0) ? -nb : nb;
}

char				*ft_itoa(int nbr)
{
	char	*res;
	int		l;
	int		znak;

	znak = (nbr < 0) ? -1 : 1;
	l = ft_intlen((long int)nbr);
	if (!(res = (char*)malloc(sizeof(char) * l + 1)))
		return (NULL);
	res[l] = '\0';
	while (--l >= 0)
	{
		res[l] = '0' + (char)ft_ascii(nbr % 10);
		nbr = nbr / 10;
	}
	if (znak == -1)
	{
		res[0] = '-';
	}
	return (res);
}
