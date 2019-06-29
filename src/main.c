/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:38:38 by yganzha           #+#    #+#             */
/*   Updated: 2019/06/10 14:38:40 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf.h"

void 		cycle(t_lx *m)
{
	int a;

	a = 1;
	while (a)
	{
		SDL_FillRect(m->sur, NULL, 0x000000);
		render_2(m);
		while (SDL_PollEvent(&m->event))
           event(m);
		SDL_UpdateWindowSurface(m->win);
	}
}

void	v_line(t_lx *m)
{
	Uint32 *p;
	int x;
	int b;
	// int u;
	int d;

	// u = 0;
	d = 0;
	x = m->x;
	b = m->drawEnd - m->drawStart;
	p =	(Uint32*)m->sur->pixels;
	while (d < m->drawStart)
		p[d++ * m->sur->w + x] = 0x08c0cd;
	while (b-- >= 0)
		p[m->drawStart++ * m->sur->w + x] = m->color;
	while (m->drawEnd++ <= m->sur->h)
		p[m->drawEnd * m->sur->w + x] = 0xf090ad;
}

void	event(t_lx *m)
{
	if (m->event.key.type == SDL_KEYDOWN && m->event.key.keysym.sym == SDLK_ESCAPE)
		finish();
	if (m->event.key.type == SDL_KEYDOWN && m->event.key.keysym.sym == SDLK_RIGHT)
    {
      m->oldDirX = m->dirX;
      m->dirX = m->dirX * cos(-m->rotSpeed) - m->dirY * sin(-m->rotSpeed);
      m->dirY = m->oldDirX * sin(-m->rotSpeed) + m->dirY * cos(-m->rotSpeed);
      m->oldPlaneX = m->planeX;
      m->planeX = m->planeX * cos(-m->rotSpeed) - m->planeY * sin(-m->rotSpeed);
      m->planeY = m->oldPlaneX * sin(-m->rotSpeed) + m->planeY * cos(-m->rotSpeed);
    }
    if (m->event.key.type == SDL_KEYDOWN && m->event.key.keysym.sym == SDLK_LEFT)
    {
      m->oldDirX = m->dirX;
      m->dirX = m->dirX * cos(m->rotSpeed) - m->dirY * sin(m->rotSpeed);
      m->dirY = m->oldDirX * sin(m->rotSpeed) + m->dirY * cos(m->rotSpeed);
      m->oldPlaneX = m->planeX;
      m->planeX = m->planeX * cos(m->rotSpeed) - m->planeY * sin(m->rotSpeed);
      m->planeY = m->oldPlaneX * sin(m->rotSpeed) + m->planeY * cos(m->rotSpeed);
    }
    if (m->event.key.type == SDL_KEYDOWN && m->event.key.keysym.sym == SDLK_DOWN)
    {
      if (!(m->map[(int)(m->posX - m->dirX * m->moveSpeed)][(int)(m->posY)]))
      	m->posX -= m->dirX * m->moveSpeed;
      if (!(m->map[(int)(m->posX)][(int)(m->posY - m->dirY * m->moveSpeed)]))
      	m->posY -= m->dirY * m->moveSpeed;
    }
    if (m->event.key.type == SDL_KEYDOWN && m->event.key.keysym.sym == SDLK_UP)
    {
      if (!(m->map[(int)(m->posX + m->dirX * m->moveSpeed)][(int)(m->posY)]))
      	m->posX += m->dirX * m->moveSpeed;
      if (!(m->map[(int)(m->posX)][(int)(m->posY + m->dirY * m->moveSpeed)]))
      	m->posY += m->dirY * m->moveSpeed;
    }
}

int 	f_init(t_lx *m)
{
	if (SDL_Init(SDL_INIT_EVERYTHING))
		error(1);
	if (TTF_Init() == -1)
		error(1);
	m->win = SDL_CreateWindow("Wolf3D", 0, 0, W, H, SDL_WINDOW_SHOWN);
	if (m->win == NULL)
		error(1);
	m->sur = SDL_GetWindowSurface(m->win);
	m->dirX = -1;
	m->dirY = 0; 
	m->planeX = 0;
	m->planeY = 0.66;
	m->x = 0;
	m->moveSpeed = 0.3;
	m->rotSpeed = 0.02;
	return (0);
}

int		w(t_lx *m)
{
	check_position(m);
	check_walls(m);
 	f_init(m);
	cycle(m);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		w(int_map(open_file(av[1]), av[1]));
	else
		error(1);
	return (0);
}
