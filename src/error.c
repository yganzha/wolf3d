/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:21:05 by yganzha           #+#    #+#             */
/*   Updated: 2019/06/13 15:21:08 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf.h"

void	usage_msg(void)
{
	write(1, "Usage: ./wolf3d [FILE_NAME]\n", 28);
	finish();
}

void	error_file(void)
{
	write(1, "Error file\n", 11);
	finish();
}

int		finish(void)
{
	system("leaks wolf3d -q");
	exit(EXIT_SUCCESS);
	return (0);
}

void	error(int n)
{
	if (n == 1)
		usage_msg();
	if (n == 2)
		error_file();
}

void	alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]) == 1)
			error_map();
		i++;
	}
}
