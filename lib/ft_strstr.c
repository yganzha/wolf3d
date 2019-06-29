/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 21:11:56 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/02 19:41:25 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *a, const char *b)
{
	int	i;
	int	j;

	i = 0;
	if (*a == '\0' && *b == '\0')
		return ((char*)a);
	if (a[0] == '\0')
		return (0);
	if (b[0] == '\0')
		return ((char*)a);
	while (a[i])
	{
		j = 0;
		while (a[i + j] == b[j] && a[i + j] && b[j])
			j++;
		if (b[j] == '\0')
			return ((char *)a + i);
		i++;
	}
	return (NULL);
}
