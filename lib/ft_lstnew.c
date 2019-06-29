/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:01:48 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/02 16:29:18 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ln;
	void	*data;

	data = NULL;
	if (!(ln = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		ln->content = NULL;
		ln->content_size = 0;
	}
	else
	{
		data = ft_memalloc(content_size);
		data = ft_memcpy(data, content, content_size);
		ln->content_size = content_size;
		ln->content = data;
	}
	ln->next = NULL;
	return (ln);
}
