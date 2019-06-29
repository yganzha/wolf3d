/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 18:10:28 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/02 19:12:28 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str2;
	int		i;

	i = ft_strlen(str);
	if (!str || !(str2 = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = -1;
	while (str[++i])
		str2[i] = str[i];
	str2[i] = '\0';
	return (str2);
}
