/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 13:40:45 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/12/27 14:44:51 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	mouse_move_menu_2(int x, int y, t_fract *fract)
{
	((x >= 833 && x <= 951) && (y >= 205 && y <= 220)) ?
		mlx_string_put(fract->mlx_ptr, fract->win_ptr, 832, 200, 0xFF0000,
				"Burning_ship") : mlx_string_put(fract->mlx_ptr,
					fract->win_ptr, 832, 200, 0xA9A9A9, "Burning_ship");
	((x >= 834 && x <= 902) && (y >= 240 && y <= 255)) ?
		mlx_string_put(fract->mlx_ptr, fract->win_ptr, 832, 235, 0xFF0000,
				"Tricorn") : mlx_string_put(fract->mlx_ptr, fract->win_ptr,
					832, 235, 0xA9A9A9, "Tricorn");
	((x >= 834 && x <= 903) && (y >= 274 && y <= 290)) ?
		mlx_string_put(fract->mlx_ptr, fract->win_ptr, 832, 270, 0xFF0000,
				"Mandbat") : mlx_string_put(fract->mlx_ptr, fract->win_ptr,
					832, 270, 0xA9A9A9, "Mandbat");
}

void	mouse_move_menu(int x, int y, t_fract *fract)
{
	((x >= 808 && x <= 836) && (y >= 131 && y <= 154)) ?
		menu_x2_color(fract, 0xFF0000) : menu_x2_color(fract, 0xA9A9A9);
	((x >= 859 && x <= 887) && (y >= 131 && y <= 154)) ?
		menu_x3_color(fract, 0xFF0000) : menu_x3_color(fract, 0xA9A9A9);
	((x >= 909 && x <= 937) && (y >= 131 && y <= 154)) ?
		menu_x4_color(fract, 0xFF0000) : menu_x4_color(fract, 0xA9A9A9);
	((x >= 959 && x <= 987) && (y >= 131 && y <= 154)) ?
		menu_x5_color(fract, 0xFF0000) : menu_x5_color(fract, 0xA9A9A9);
	((x >= 804 && x <= 898) && (y >= 97 && y <= 118)) ?
		mlx_string_put(fract->mlx_ptr, fract->win_ptr, 832, 95,
				0xFF0000, "Mandelbrot") : mlx_string_put(fract->mlx_ptr,
					fract->win_ptr, 832, 95, 0xA9A9A9, "Mandelbrot");
	((x >= 834 && x <= 882) && (y >= 170 && y <= 184)) ?
		mlx_string_put(fract->mlx_ptr, fract->win_ptr, 832, 165, 0xFF0000,
				"Julia") : mlx_string_put(fract->mlx_ptr, fract->win_ptr,
					832, 165, 0xA9A9A9, "Julia");
	mouse_move_menu_2(x, y, fract);
}

int		mouse_move(int x, int y, t_fract *fract)
{
	if (fract->type_d == 2 && fract->change_julia == 1)
	{
		fract->cre = x;
		fract->cim = y;
		call_draw(fract);
	}
	mouse_move_menu(x, y, fract);
	return (1);
}
