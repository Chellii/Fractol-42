/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 20:05:21 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/12/27 13:52:08 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	draw_mandbat(int x, int y, t_fract *fract)
{
	t_draw_var dvar;

	if (fract->zoom_mid == 1)
		equa_zoom_mid(&dvar, fract, x, y);
	if (fract->zoom_mid == 0)
		equa_zoom_mouse(&dvar, fract, x, y);
	dvar.zr = 0;
	dvar.zi = 0;
	dvar.iteration = 0;
	while (((dvar.zr * dvar.zr + dvar.zi * dvar.zi) <= 4)
	&& (dvar.iteration < fract->iteration))
	{
		dvar.zr_old = dvar.zr * dvar.zr * dvar.zr * dvar.zr +
		dvar.zi * dvar.zi * dvar.zi * dvar.zi - 4 * dvar.zr * dvar.zr
		* dvar.zi * dvar.zi + dvar.cre;
		dvar.zi = 4 * dvar.zr * dvar.zr * dvar.zr * dvar.zi - dvar.zr
		* dvar.zi * dvar.zi * dvar.zi + dvar.cim;
		dvar.zr = dvar.zr_old;
		dvar.iteration++;
	}
	if (dvar.iteration != fract->iteration)
		set_color(fract, dvar.iteration, x, y);
}

void	draw_tricorn(int x, int y, t_fract *fract)
{
	t_draw_var dvar;

	if (fract->zoom_mid == 1)
		equa_zoom_mid(&dvar, fract, x, y);
	if (fract->zoom_mid == 0)
		equa_zoom_mouse(&dvar, fract, x, y);
	dvar.zr = 0;
	dvar.zi = 0;
	dvar.iteration = 0;
	while (((dvar.zr * dvar.zr + dvar.zi * dvar.zi) <= 4)
	&& (dvar.iteration < fract->iteration))
	{
		dvar.zr_old = dvar.zr * dvar.zr - dvar.zi * dvar.zi + dvar.cre;
		dvar.zi = -2 * dvar.zr * dvar.zi + dvar.cim;
		dvar.zr = dvar.zr_old;
		dvar.iteration++;
	}
	if (dvar.iteration != fract->iteration)
		set_color(fract, dvar.iteration, x, y);
}
