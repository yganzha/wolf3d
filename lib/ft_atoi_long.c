/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:43:04 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/04 17:43:33 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_long(int b, int c, int r)
{
	if (b > 19 && c == -1)
		return (0);
	if (b > 18 && c == 1)
		return (-1);
	return (r * c);
}
