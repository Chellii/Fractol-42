/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot_vn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 23:35:20 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/12/27 14:00:28 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	draw_mand_2(int x, int y, t_fract *fract)
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
		dvar.zr_old = dvar.zr * dvar.zr * dvar.zr
			- 3 * dvar.zr * (dvar.zi * dvar.zi)
		+ dvar.cre;
		dvar.zi = -(dvar.zi * dvar.zi * dvar.zi) + 3
			* (dvar.zr * dvar.zr * dvar.zi) + dvar.cim;
		dvar.zr = dvar.zr_old;
		dvar.iteration++;
	}
	if (dvar.iteration != fract->iteration)
		set_color(fract, dvar.iteration, x, y);
}

void	draw_mand_3(int x, int y, t_fract *fract)
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
		dvar.zr_old = dvar.zr * dvar.zr * dvar.zr * dvar.zr
			+ dvar.zi * dvar.zi * dvar.zi * dvar.zi
			- 6 * ((dvar.zr * dvar.zr) * (dvar.zi * dvar.zi))
			+ dvar.cre;
		dvar.zi = 4 * (dvar.zr * dvar.zr * dvar.zr * dvar.zi)
			- 4 * (dvar.zr * dvar.zi * dvar.zi * dvar.zi)
			+ dvar.cim;
		dvar.zr = dvar.zr_old;
		dvar.iteration++;
	}
	if (dvar.iteration != fract->iteration)
		set_color(fract, dvar.iteration, x, y);
}

void	draw_mand_4(int x, int y, t_fract *fract)
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
		dvar.zr_old = dvar.zr * dvar.zr * dvar.zr * dvar.zr * dvar.zr
		- 10 * ((dvar.zr * dvar.zr * dvar.zr) * (dvar.zi * dvar.zi))
		+ 5 * (dvar.zr * (dvar.zi * dvar.zi * dvar.zi * dvar.zi))
		+ dvar.cre;
		dvar.zi = 5 * ((dvar.zr * dvar.zr * dvar.zr * dvar.zr) * dvar.zi)
		- 10 * ((dvar.zr * dvar.zr) * (dvar.zi * dvar.zi * dvar.zi))
		+ (dvar.zi * dvar.zi * dvar.zi * dvar.zi * dvar.zi)
		+ dvar.cim;
		dvar.zr = dvar.zr_old;
		dvar.iteration++;
	}
	if (dvar.iteration != fract->iteration)
		set_color(fract, dvar.iteration, x, y);
}

void	draw_mand_5(int x, int y, t_fract *fract)
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
		dvar.zr_old = pow(dvar.zr, 6) - pow(dvar.zi, 6)
		+ 15 * (dvar.zr * dvar.zr * dvar.zi * dvar.zi * dvar.zi * dvar.zi)
		- 15 * (dvar.zr * dvar.zr * dvar.zr * dvar.zr * dvar.zi * dvar.zi)
		+ dvar.cre;
		dvar.zi = 6 * dvar.zr * (dvar.zi * dvar.zi * dvar.zi * dvar.zi
		* dvar.zi) + 6 * (dvar.zr * dvar.zr * dvar.zr * dvar.zr * dvar.zr)
		* dvar.zi - 20 * (dvar.zr * dvar.zr * dvar.zr) * (dvar.zi *
		dvar.zi * dvar.zi) + dvar.cim;
		dvar.zr = dvar.zr_old;
		dvar.iteration++;
	}
	if (dvar.iteration != fract->iteration)
		set_color(fract, dvar.iteration, x, y);
}
