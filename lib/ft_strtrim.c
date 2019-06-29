/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:41:53 by yganzha           #+#    #+#             */
/*   Updated: 2018/11/26 20:49:42 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		e;
	char	*ss;

	if (!s)
		return (NULL);
	i = -1;
	e = ft_strlen((char*)s);
	while (s[e - 1] == ' ' || s[e - 1] == '\t' || s[e - 1] == '\n')
		e--;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		e--;
	if (e <= 0)
		e = 0;
	ss = ft_strsub(s, i, e);
	return (ss);
}
