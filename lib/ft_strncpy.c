/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 18:43:09 by yganzha           #+#    #+#             */
/*   Updated: 2018/11/04 19:22:25 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *d, const char *s, size_t n)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen((char *)s);
	while (i < n)
	{
		if (i > l)
			d[i] = '\0';
		else
			d[i] = s[i];
		i++;
	}
	return (d);
}
