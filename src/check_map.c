/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 15:43:05 by yganzha           #+#    #+#             */
/*   Updated: 2019/06/29 15:43:41 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf.h"

void	check_position(t_lx *m)
{
	int i;
	int j;

	i = 0;
	while (m->map[i + 1] != NULL)
	{
		j = 0;
		while (m->map[i][j + 1] != '\n')
		{
			if (m->map[i][j] == 0 && m->map[i][j + 1] == 0)
			{
				if (m->map[i + 1][j] == 0 && m->map[i + 1][j + 1] == 0)
				{
					m->posX = (double)i + 1;
					m->posY = (double)j + 1;
					break;
				}
			}
			j++;
		}
		i++;
	}
	if (!(m->posX))
		error_map();
}

void	check_walls(t_lx *n)
{
	int i;
	int j;

	i = 0;
	while (n->map[i] != NULL)
	{
		j = 0;
		while (n->map[i][j] != '\n')
			j++;
		if (n->map[i][j - 1] < 0 || n->map[i][0] < 0)
			error_map();
		i++;
	}
	j = 0;
	while (n->map[i - 1][j] != '\n')
		if (n->map[i - 1][j] > 0 && n->map[0][j] > 0)
			j++;
		else
			error_map();

}
