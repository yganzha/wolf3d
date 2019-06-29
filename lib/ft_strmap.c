/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:26:58 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/02 18:09:03 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		l;
	int		i;
	char	*ss;

	i = 0;
	if (!s || !f)
		return (NULL);
	l = ft_strlen((char*)s);
	if (!(ss = ft_memalloc(l + 1)))
		return (NULL);
	while (*s)
	{
		ss[i] = f(*s);
		s++;
		i++;
	}
	return (ss);
}
