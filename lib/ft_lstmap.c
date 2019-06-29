/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:09:09 by yganzha           #+#    #+#             */
/*   Updated: 2018/12/02 17:41:49 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first;
	t_list	*copy;

	if (!lst || !f ||
		!(first = ft_lstnew(f(lst)->content, f(lst)->content_size)))
		return (NULL);
	copy = first;
	lst = lst->next;
	while (lst != NULL)
	{
		if (!(copy->next = ft_lstnew(f(lst)->content, f(lst)->content_size)))
			return (NULL);
		lst = lst->next;
		copy = copy->next;
	}
	return (first);
}
