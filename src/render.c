/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yganzha <yganzha@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 18:49:24 by yganzha           #+#    #+#             */
/*   Updated: 2019/06/26 18:49:25 by yganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf.h"

int 	render_2(t_lx *m)
{
  m->x = 0;
    while (m->x < W)
    {
      m->cameraX = 2 * m->x / (double)W - 1;
      m->rayDirX = m->dirX + m->planeX * m->cameraX;
      m->rayDirY = m->dirY + m->planeY * m->cameraX;
      m->mapX = (int)m->posX;
      m->mapY = (int)m->posY;
      m->sideDistX = 0;
      m->sideDistY = 0;
      m->deltaDistX = fabs(1 / m->rayDirX);
      m->deltaDistY = fabs(1 / m->rayDirY);
      m->perpWallDist = 0;
      m->stepX = 0;
      m->stepY = 0;
      m->hit = 0;
      m->side = 0;
      if (m->rayDirX < 0)
      {
        m->stepX = -1;
        m->sideDistX = (m->posX - m->mapX) * m->deltaDistX;
      }
      else
      {
        m->stepX = 1;
        m->sideDistX = (m->mapX + 1.0 - m->posX) * m->deltaDistX;
      }
      if (m->rayDirY < 0)
      {
        m->stepY = -1;
        m->sideDistY = (m->posY - m->mapY) * m->deltaDistY;
      }
      else
      {
        m->stepY = 1;
        m->sideDistY = (m->mapY + 1.0 - m->posY) * m->deltaDistY;
      }
      while (m->hit == 0)
      {
        if (m->sideDistX < m->sideDistY)
        {
          m->sideDistX += m->deltaDistX;
          m->mapX += m->stepX;
          m->side = 0;
        }
        else
        {
          m->sideDistY += m->deltaDistY;
          m->mapY += m->stepY;
          m->side = 1;
        }
        if (m->map[m->mapX][m->mapY] > 0)
          m->hit = 1;
      }
      if (m->side == 0)
        m->perpWallDist = (m->mapX - m->posX + (1 - m->stepX) / 2) / m->rayDirX;
      else
        m->perpWallDist = (m->mapY - m->posY + (1 - m->stepY) / 2) / m->rayDirY;
      m->lineHeight = (int)(H / m->perpWallDist);
      m->drawStart = m->lineHeight / -2 + H / 2;
      if (m->drawStart < 0)
        m->drawStart = 0;
      m->drawEnd = m->lineHeight / 2 + H / 2;
      if (m->drawEnd >= H)
        m->drawEnd = H - 1;
 	    if (m->map[m->mapX][m->mapY] == 1)
			m->color = 0xff0000;
		else if (m->map[m->mapX][m->mapY] == 2)
			m->color = 0x00ff00;
		else if (m->map[m->mapX][m->mapY] == 3)
			m->color = 0x0000ff;
		else if (m->map[m->mapX][m->mapY] == 4)
			m->color = 0xffffff;
		else
			m->color = 0xffff00;
      if (m->side == 1) {m->color = m->color / 2;
      }
      v_line(m);
      m->x++;
  }
  return (1);
}
