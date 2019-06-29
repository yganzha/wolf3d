/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:59:13 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/04 17:39:01 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_newcp(char *s, int n)
{
	char	*new;

	if (!(new = (char *)malloc(sizeof(char) * n + 1)))
		return (NULL);
	new = ft_strncpy(new, s, n);
	new[n] = '\0';
	return (new);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**n;
	int		i;
	int		a;
	int		j;

	i = 0;
	a = 0;
	if (!s ||
		!(n = (char **)malloc(sizeof(char *) * (ft_words((char*)s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			n[a++] = ft_newcp((char*)s + j, i - j);
	}
	n[a] = NULL;

	return (n);
}
