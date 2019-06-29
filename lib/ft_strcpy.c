/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 18:43:09 by yganzha           #+#    #+#             */
/*   Updated: 2018/11/04 18:52:15 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *d, const char *s)
{
	int				i;
	unsigned char	*ss;

	i = 0;
	ss = (unsigned char *)s;
	while (ss[i] != '\0')
	{
		d[i] = ss[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
