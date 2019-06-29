/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:28:43 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/02 18:23:17 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		l;
	int		i;
	char	*ss;

	if (!s || !f)
		return (NULL);
	i = 0;
	l = ft_strlen((char*)s);
	if (!(ss = ft_memalloc(l + 1)))
		return (NULL);
	while (*s)
	{
		ss[i] = f(i, *s);
		s++;
		i++;
	}
	return (ss);
}
