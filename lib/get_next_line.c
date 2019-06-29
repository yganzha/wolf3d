/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 14:28:39 by yganzha           #+#    #+#             */
/*   Updated: 2019/03/12 16:02:58 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*separate_lines(t_ls *new_lst, char buf[BUFF_SIZE + 1])
{
	char		*ln1;
	char		*part_before_n;
	char		*clean;
	char		*n_here;
	int			index;

	ln1 = ft_strnew(0);
	while (!(n_here = ft_strchr(buf, '\n')))
	{
		JOIN_CLEAN;
		if (!(index = read(new_lst->fd, buf, BUFF_SIZE)))
		{
			ft_strdel(&(new_lst->data));
			return (ln1);
		}
		buf[index] = '\0';
	}
	part_before_n = ft_strsub(buf, 0, (n_here - buf));
	JOIN;
	CLEAN;
	clean = new_lst->data;
	new_lst->data = ft_strsub(buf,
		(n_here - buf + 1), (BUFF_SIZE - (n_here - buf)));
	free(clean);
	return (ln1);
}

static t_ls	*check_file(const int fd, t_ls **first)
{
	t_ls			*new;

	new = *first;
	while (new)
	{
		if (new->fd == fd)
			return (new);
		new = new->next;
	}
	if (!(new = (t_ls *)malloc(sizeof(t_ls))))
		return (0);
	new->data = NULL;
	new->fd = fd;
	new->next = *first;
	*first = new;
	return (new);
}

int			gnl(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static t_ls	*lst = NULL;
	t_ls		*new_lst;
	int			index;

	if (CHECK)
		return (-1);
	new_lst = check_file(fd, &lst);
	if (new_lst->data && ft_strlen(new_lst->data))
		ft_strcpy(buf, new_lst->data);
	else
	{
		if (!(index = read(fd, buf, BUFF_SIZE)))
		{
			ft_strdel(&(new_lst->data));
			return (0);
		}
		buf[index] = '\0';
	}
	*line = separate_lines(new_lst, buf);
	return (1);

}
