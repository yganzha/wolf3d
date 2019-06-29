/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:24:37 by yganzha           #+#    #+#             */
/*   Updated: 2018/11/03 18:22:07 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *sr, int c, size_t n)
{
	int				i;
	unsigned char	*src;

	src = (unsigned char *)sr;
	i = 0;
	while (n--)
		src[i++] = c;
	return (src);
}
