/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:07:16 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/02 19:29:56 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *d, const char *a, size_t n)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (d[i])
		i++;
	while (j < n && a[j])
	{
		d[i] = a[j];
		i++;
		j++;
	}
	d[i] = '\0';
	return (d);
}
