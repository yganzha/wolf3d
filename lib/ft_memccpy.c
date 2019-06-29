/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 15:15:21 by yganzha           #+#    #+#             */
/*   Updated: 2018/11/04 17:12:33 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*dd;
	unsigned char	*ss;

	i = 0;
	dd = (unsigned char *)d;
	ss = (unsigned char *)s;
	while (n--)
	{
		dd[i] = ss[i];
		if (ss[i] == (unsigned char)c)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
