/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 13:40:18 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/12/27 18:18:20 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double	interpolate(double start, double end, double interpolation)
{
	return (start + ((end - start) * interpolation));
}

void	apply_zoom(t_fract *fract, double mouse_re,
		double mouse_im, double zoom_factor)
{
	double interpolation;

	interpolation = 1.0 / zoom_factor;
	fract->re_min = interpolate(mouse_re, fract->re_min, interpolation);
	fract->im_min = interpolate(mouse_im, fract->im_min, interpolation);
	fract->re_max = interpolate(mouse_re, fract->re_max, interpolation);
	fract->im_max = interpolate(mouse_im, fract->im_max, interpolation);
}

void	fract_zoom_mouse(int x, int y, t_fract *fract)
{
	double mouse_re;
	double mouse_im;

	mlx_destroy_image(fract->mlx_ptr, fract->img_ptr);
	mlx_clear_window(fract->mlx_ptr, fract->win_ptr);
	mouse_re = (double)x / (800 / (fract->re_max - fract->re_min))
		+ fract->re_min;
	mouse_im = (double)y / (800 / (fract->im_max - fract->im_min))
		+ fract->im_min;
	apply_zoom(fract, mouse_re, mouse_im, fract->zoom);
	draw_fract(fract);
}

void	mouse_press_2(int button, int x, int y, t_fract *fract)
{
	if (button == 4)
	{
		if (fract->zoom_mid == 1)
		{
			fract->zoom -= 0.5;
			call_draw(fract);
		}
		else
		{
			if (fract->zoom >= 1)
				fract->zoom = 1;
			fract->zoom -= 0.1;
			fract_zoom_mouse(x, y, fract);
		}
	}
}

int		mouse_press(int button, int x, int y, t_fract *fract)
{
	if (button == 5)
	{
		if (fract->zoom_mid == 1)
		{
			fract->zoom += 0.5;
			call_draw(fract);
		}
		else
		{
			if (fract->zoom <= 1)
				fract->zoom = 1;
			fract->zoom += 0.1;
			fract_zoom_mouse(x, y, fract);
		}
	}
	mouse_press_2(button, x, y, fract);
	if (button == 1)
		mouse_press_menu(x, y, fract);
	return (1);
}
