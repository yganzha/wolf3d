/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 21:54:39 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/02 19:40:12 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *a, const char *b, size_t l)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (a[i] && i < l)
	{
		j = 0;
		while (a[i + j] == b[j] && a[i + j]
				&& b[j] && (i + j) < l)
			j++;
		if (b[j] == '\0')
			return ((char *)a + i);
		i++;
	}
	return (NULL);
}
