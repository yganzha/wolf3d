/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:55:37 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/02 19:56:50 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ss;
	int		i;
	int		j;

	if (!s1 && s2)
		return ((char *)s2);
	if (!s2 && s1)
		return ((char *)s1);
	if (!s1 || !s2)
		return (NULL);
	i = -1;
	j = -1;
	if (!(ss = ft_memalloc(ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1)))
		return (NULL);
	while (s1[++i])
		ss[i] = s1[i];
	while (s2[++j])
		ss[i++] = s2[j];
	ss[i + 1] = '\0';
	return (ss);
}
