/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:12:26 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/08 15:37:45 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char	*cp;

	if (!(cp = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	ft_strncpy(cp, str, n);
	cp[n] = '\0';
	return (cp);
}
