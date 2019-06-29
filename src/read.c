/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 14:05:06 by yganzha           #+#    #+#             */
/*   Updated: 2019/06/15 14:05:08 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf.h"

t_lx	*int_map(t_lx *m, char *file)
{
	// int a = 0;
	// int s = 0;

	if ((m->fd = open(file, O_RDONLY)) < 0)
		error_map();
	if (!(m->map = (int **)malloc(sizeof(int *) * m->row + 1)))
		return (NULL);
	m->count = 0;
	while (gnl(m->fd, &m->line) > 0)
	{
		m->ln = ft_strsplit(m->line, ' ');
		free(m->line);
		m->i = -1;
		if (!(m->map[m->count] =
			(int *)malloc(sizeof(int) * m->len + 1)))
			return (NULL);
		while (++m->i < m->len)
		{
			if ((m->map[m->count][m->i] =
				ft_atoi(m->ln[m->i])) > 4)
				error_map(); // leak
			free(m->ln[m->i]);
		}
		m->map[m->count][m->i] = '\n';
		free(m->ln);
		m->count++;
	}
	m->map[m->count] = NULL;

	// while (m->map[a] != NULL)
	// {
	// 	s = 0;
	// 	while (m->map[a][s] != '\n')
	// 	{
	// 		printf("%i\n", m->map[a][s]);
	// 		s++;
	// 	}
	// 	a++;
	// }

	return (m);
}

t_lx	*check_map(t_lx *m, int fd, char *line, int n)
{
	while ((n = gnl(fd, &line)) > 0)
	{
		alpha(line);
		if (m->len != ft_words(line, ' '))
			error_map();
		free(line);
		m->row++;
	}
		alpha(line);
	if (n < 0)
		free(line);
	m->map = NULL;
	if (m->row == 0)
		error_map();
	return (m);
}

t_lx	*open_file(char *file)
{
	t_lx	*m;
	int		fd;
	char	*line;
	int		n;

	if ((fd = open(file, O_RDONLY)) < 0 || (open(file, O_DIRECTORY)) > 0)
		error(1);
	if (!(m = (t_lx*)malloc(sizeof(t_lx))))
		finish();
	m->row = 0;
	if ((n = gnl(fd, &line)) > 0)
	{
		alpha(line);
		m->len = ft_words(line, ' ');
		m->row++;
		free(line);
	}
	return (check_map(m, fd, line, n));
}
