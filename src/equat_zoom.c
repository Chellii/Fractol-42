/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equat_zoom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 22:09:22 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/12/25 22:18:52 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	equa_zoom_mid(t_draw_var *dvar, t_fract *fract, int x, int y)
{
	dvar->cre = 2 * (x - 800 / 2) / (0.5 * fract->zoom * 800) + fract->move_x;
	dvar->cim = 2 * (y - 800 / 2) / (0.5 * fract->zoom * 800) + fract->move_y;
}

void	equa_zoom_mouse(t_draw_var *dvar, t_fract *fract, int x, int y)
{
	dvar->cre = fract->re_min + ((double)x / (800 /
				(fract->re_max - fract->re_min))) + fract->move_x;
	dvar->cim = fract->im_min + ((double)y / (800 /
				(fract->im_max - fract->im_min))) + fract->move_y;
}
