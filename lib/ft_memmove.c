/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 17:14:40 by yganzha           #+#    #+#             */
/*   Updated: 2018/11/04 17:55:00 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	size_t			i;
	unsigned char	*ss;
	unsigned char	*dd;

	i = -1;
	dd = (unsigned char *)d;
	ss = (unsigned char *)s;
	if (s < d)
		while (n--)
			*(dd + n) = *(ss + n);
	else
		while (++i < n)
			*(dd + i) = *(ss + i);
	return (dd);
}
