/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 18:04:27 by yganzha           #+#    #+#             */
/*   Updated: 2018/11/04 18:22:20 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int cc, size_t n)
{
	size_t			i;
	unsigned char	c;

	i = 0;
	c = (unsigned char)cc;
	while (n--)
	{
		if (*(unsigned char *)s++ == c)
			return ((unsigned char *)--s);
	}
	return (NULL);
}
