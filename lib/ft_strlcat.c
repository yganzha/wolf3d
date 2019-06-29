/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:34:47 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/02 19:28:09 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *a, size_t n)
{
	size_t	i;
	int		j;
	size_t	c;

	i = ft_strlen(d);
	c = ft_strlen(d) + ft_strlen(a);
	if (n < (i + 1))
		return (ft_strlen(a) + n);
	if (n > (i + 1))
	{
		j = 0;
		while (i < (n - 1) && a[j])
			d[i++] = a[j++];
		d[i] = '\0';
	}
	return (c);
}
