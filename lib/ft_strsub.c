/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:32:16 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/02 18:17:49 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*ss;

	if (!s || !(ss = ft_memalloc(len + 1)))
		return (NULL);
	ss = ft_strncpy(ss, (s + start), len);
	return (ss);
}
