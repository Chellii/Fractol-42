/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 22:19:07 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/12/25 22:35:32 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	zoom_mid(t_draw_var *dvar, t_fract *fract, int x, int y)
{
	dvar->cre = 2 * (fract->cre - 800 / 2) / (0.5 * 800);
	dvar->cim = 2 * (fract->cim - 800 / 2) / (0.5 * 800);
	dvar->zr = 2 * (x - 800 / 2) / (0.5 * fract->zoom * 800) + fract->move_x;
	dvar->zi = 2 * (y - 800 / 2) / (0.5 * fract->zoom * 800) + fract->move_y;
}

void	zoom_mouse(t_draw_var *dvar, t_fract *fract, int x, int y)
{
	dvar->cre = 2 * (fract->cre - 800 / 2) / (0.5 * 800);
	dvar->cim = 2 * (fract->cim - 800 / 2) / (0.5 * 800);
	dvar->zr = fract->re_min + ((double)x / (800 /
				(fract->re_max - fract->re_min))) + fract->move_x;
	dvar->zi = fract->im_min + ((double)y / (800 /
				(fract->im_max - fract->im_min))) + fract->move_y;
}

void	draw_julia(int x, int y, t_fract *fract)
{
	t_draw_var dvar;

	if (fract->zoom_mid == 1)
		zoom_mid(&dvar, fract, x, y);
	if (fract->zoom_mid == 0)
		zoom_mouse(&dvar, fract, x, y);
	dvar.iteration = 0;
	while ((dvar.iteration < fract->iteration) &&
			((dvar.zr * dvar.zr + dvar.zi * dvar.zi) < 4))
	{
		dvar.zr_old = dvar.zr * dvar.zr - dvar.zi * dvar.zi + dvar.cre;
		dvar.zi = 2 * dvar.zr * dvar.zi + dvar.cim;
		dvar.zr = dvar.zr_old;
		dvar.iteration++;
	}
	if (dvar.iteration != fract->iteration)
		set_color(fract, dvar.iteration, x, y);
}
