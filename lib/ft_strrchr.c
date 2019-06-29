/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 21:08:27 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/02 19:40:59 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int b)
{
	int	i;

	i = ft_strlen(s);
	while (s[i] != b && i >= 0)
		i--;
	if (s[i] == b)
		return ((char *)s + i);
	return (NULL);
}
