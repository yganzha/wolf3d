/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 18:49:51 by yganzha           #+#    #+#             */
/*   Updated: 2018/11/04 15:39:40 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	int				i;
	unsigned char	*dd;
	unsigned char	*ss;

	dd = (unsigned char *)d;
	ss = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		dd[i] = ss[i];
		i++;
	}
	return (dd);
}
