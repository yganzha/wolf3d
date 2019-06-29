/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 22:09:37 by yganzha           #+#    #+#             */
/*   Updated: 2018/11/19 22:21:06 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strnew(size_t size)
{
	void	*str;

	str = malloc(size + 1);
	if (!str)
		return (str);
	ft_memset(str, 0, size + 1);
	return (str);
}
