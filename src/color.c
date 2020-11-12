/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 22:50:12 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/12/25 23:07:24 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		color_rgb(int r, int g, int b)
{
	unsigned char c[4];

	c[0] = b;
	c[1] = g;
	c[2] = r;
	c[3] = 0;
	return (*(int *)c);
}

void	set_color_3(t_fract *fract, int iteration, int x, int y)
{
	if (fract->color_var == 8)
		fract->mlx_img_data[y * 1000 + x] = color_rgb(
				sin(0.1 * iteration + 0.1) * 127.5 - 127.5,
				sin(0.1 * iteration + 0.6) * 127.5 + 127.5,
				sin(0.8 * iteration + 0.8) * 127.5 + 127.5);
	else if (fract->color_var == 9)
		fract->mlx_img_data[y * 1000 + x] = color_rgb(
				sin(0.1 * iteration + 0.1) * 127.5 - 127.5,
				sin(0.9 * iteration + 0.6) * 127.5 + 127.5,
				sin(0.8 * iteration + 0.8) * 127.5 + 127.5);
	else if (fract->color_var == 10)
		fract->mlx_img_data[y * 1000 + x] = color_rgb(
				sin(0.1 * iteration + 0.1) * 127.5 - 127.5,
				0, (sin(0.8 * iteration + 0.8) * 127.5 + 127.5));
	else if (fract->color_var == 11)
		fract->mlx_img_data[y * 1000 + x] = color_rgb(0, 0,
				(sin(0.8 * iteration + 0.8) * 127.5 + 127.5));
	else if (fract->color_var == 12)
		fract->mlx_img_data[y * 1000 + x] = color_rgb(0,
				(sin(0.3 * iteration + 0.8) * 127.5 + 127.5), 0);
	else if (fract->color_var == 13)
		fract->mlx_img_data[y * 1000 + x] = color_rgb(
				(sin(0.6 * iteration + 0.8) * 127.5 + 127.5), 0, 0);
}

void	set_color_2(t_fract *fract, int iteration, int x, int y)
{
	if (fract->color_var == 4)
		fract->mlx_img_data[y * 1000 + x] = color_rgb(
				sin(0.1 * iteration + 0.1) * 127.5 - 127.5,
				sin(0.1 * iteration + 0.5) * 127.5 + 127.5,
				sin(0.1 * iteration + 0.2) * 127.5 + 127.5);
	else if (fract->color_var == 5)
		fract->mlx_img_data[y * 1000 + x] = color_rgb(
				sin(0.1 * iteration + 0.1) * 127.5 - 127.5,
				sin(0.1 * iteration + 0.5) * 127.5 + 127.5,
				sin(1.5 * iteration + 0.1) * 127.5 + 127.5);
	else if (fract->color_var == 6)
		fract->mlx_img_data[y * 1000 + x] = color_rgb(
				sin(0.1 * iteration + 0.1) * 127.5 - 127.5,
				sin(0.1 * iteration + 0.5) * 127.5 + 127.5,
				sin(0.8 * iteration + 0.8) * 127.5 + 127.5);
	else if (fract->color_var == 7)
		fract->mlx_img_data[y * 1000 + x] = color_rgb(
				sin(0.1 * iteration + 0.1) * 127.5 - 127.5,
				sin(0.1 * iteration + 0.5) * 127.5 + 127.5,
				sin(0.1 * iteration + 0.8) * 127.5 + 127.5);
}

void	set_color(t_fract *fract, int iteration, int x, int y)
{
	if (fract->color_var == 0)
		fract->mlx_img_data[y * 1000 + x] = color_rgb(
				sin(0.1 * iteration + 0.1) * 127.5 - 127.5,
				sin(0.1 * iteration + 0.1) * 127.5 + 127.5,
				sin(0.1 * iteration + 0.1) * 127.5 + 127.5);
	else if (fract->color_var == 1)
		fract->mlx_img_data[y * 1000 + x] = color_rgb(
				sin(0.1 * iteration + 0.8) * 127.5 - 127.5,
				sin(0.1 * iteration + 0.5) * 127.5 + 127.5,
				sin(0.1 * iteration + 0.2) * 127.5 + 127.5);
	else if (fract->color_var == 2)
		fract->mlx_img_data[y * 1000 + x] = color_rgb(
				sin(0.8 * iteration + 0.1) * 127.5 - 127.5,
				sin(0.1 * iteration + 0.5) * 127.5 + 127.5,
				sin(0.1 * iteration + 0.2) * 127.5 + 127.5);
	else if (fract->color_var == 3)
		fract->mlx_img_data[y * 1000 + x] = color_rgb(
				sin(0.1 * iteration + 0.1) * 127.5 - 127.5,
				sin(0.1 * iteration + 0.5) * 127.5 + 127.5,
				sin(0.1 * iteration + 1.5) * 127.5 + 127.5);
	set_color_2(fract, iteration, x, y);
	set_color_3(fract, iteration, x, y);
}
