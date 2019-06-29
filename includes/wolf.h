/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 13:25:18 by yganzha           #+#    #+#             */
/*   Updated: 2019/06/13 13:26:55 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  WOLF_H
# define WOLF_H
# include "../lib/libft.h"
# include <fcntl.h>
# include <SDL2/SDL.h>
# include "SDL_image.h"
# include "SDL_mixer.h"
# include "SDL_ttf.h"
# include <time.h>
# define W 800
# define H 600

typedef struct		s_lx{
	int				**map;
	int				row;
	int				len;
	char			*line;
	char			**ln;
	int				fd;
	int				i;
	int				count;
	double			posX;
	double			posY;
	double			dirX;
	double			dirY;
	double			planeX;
	double			planeY;
	double 			moveSpeed;
	double 			rotSpeed;
	SDL_DisplayMode displayMode;
	SDL_Window  	*win;
	SDL_Surface  	*sur;
	SDL_Event  		event;
	SDL_Surface 	*texture[11];
	double 			cameraX;
	double 			rayDirX;
	double 			rayDirY;
	double			sideDistX;
	double			sideDistY;
	int 			mapX;
	int 			mapY;
	double 			deltaDistX;
	double 			deltaDistY;
	double 			perpWallDist;
	int 			stepX;
	int 			stepY;
	int 			hit;
	int 			side;
	int 			lineHeight;
	int 			drawStart;
	int 			drawEnd;
	int				color;
	int 			x;
	double 			oldDirX;
	double 			oldPlaneX;
}					t_lx;

t_lx	*int_map(t_lx *map_xy, char *file);
t_lx	*check_map(t_lx *map, int fd, char *line, int m);
t_lx	*open_file(char	*file);
void	usage_msg(void);
int		finish(void);
void	error(int n);
void	alpha(char *str);
void	error_file(void);
void 		cycle(t_lx *m);
int 	render(t_lx *m);
void	event(t_lx *m);
void	v_line(t_lx *m);
int 	render_2(t_lx *m);
void	error_map(void);
void	clean_map(t_lx *m);
void	check_position(t_lx *m);
void	check_walls(t_lx *m);

#endif
