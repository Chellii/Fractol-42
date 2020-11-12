/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 16:29:24 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/12/27 15:06:52 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	menu_4(t_fract *fract)
{
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			850, 780, 0x61323C, "\\");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			870, 780, 0x61323C, ".");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			880, 780, 0x61323C, "_");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			890, 780, 0x61323C, ".");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			910, 780, 0x61323C, "/");
}

void	menu_3(t_fract *fract)
{
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			800, 630, 0xA9A9A9, "* Press M to zoom");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			860, 650, 0xA9A9A9, "in the middle");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			830, 670, 0xA9A9A9, "+ | - OR MOUSE");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			800, 700, 0xA9A9A9, "* Press Z to zoom");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			880, 720, 0xA9A9A9, "With Cursor");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			832, 235, 0xA9A9A9, "Tricorn | 4");
}

void	menu_2(t_fract *fract)
{
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			802, 270, 0xA9A9A9, "==>");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			832, 270, 0xA9A9A9, "Mandbat | 5");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			850, 320, 0x61323C, "_________");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			800, 360, 0xA9A9A9, "* Move with arrows");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			800, 390, 0xA9A9A9, "* Press C");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			820, 410, 0xA9A9A9, "To change color");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			800, 440, 0xA9A9A9, "* Press Q");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			820, 460, 0xA9A9A9, "iteration++");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			800, 490, 0xA9A9A9, "* Press W");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			820, 510, 0xA9A9A9, "iteration--");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			800, 550, 0xA9A9A9, "* Stop Julia with S");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			800, 590, 0xA9A9A9, "* Start Julia with P");
}

void	menu(t_fract *fract)
{
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			860, 40, 0xA9A9A9, "Fract'ol");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			860, 42, 0xA9A9A9, "________");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			802, 95, 0xA9A9A9, "==>");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			832, 95, 0xA9A9A9, "Mandelbrot | 1");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			802, 165, 0xA9A9A9, "==>");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			832, 165, 0xA9A9A9, "Julia | 2");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			802, 200, 0xA9A9A9, "==>");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			832, 200, 0xA9A9A9, "Burning_ship | 3");
	mlx_string_put(fract->mlx_ptr, fract->win_ptr,
			802, 235, 0xA9A9A9, "==>");
	menu_2(fract);
	menu_3(fract);
	menu_4(fract);
	menu_x2_color(fract, 0xA9A9A9);
	menu_x3_color(fract, 0xA9A9A9);
	menu_x4_color(fract, 0xA9A9A9);
	menu_x5_color(fract, 0xA9A9A9);
}
