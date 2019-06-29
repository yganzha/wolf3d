/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:55:52 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/02 19:32:21 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int b)
{
	int	i;

	i = 0;
	while (s[i] != b && s[i])
		i++;
	if (s[i] == b)
		return ((char *)s + i);
	return (NULL);
}
