/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 20:00:39 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/12/29 22:03:20 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	key_press_5(int keycode, t_fract *fract)
{
	if (keycode == 83)
	{
		fract->mand_version = 1;
		fract->type_d = 1;
		call_draw_init(fract);
	}
	if (keycode == 85)
	{
		fract->type_d = 4;
		call_draw_init(fract);
	}
	if (keycode == 86)
	{
		fract->type_d = 3;
		call_draw_init(fract);
	}
	if (keycode == 87)
	{
		fract->type_d = 5;
		call_draw_init(fract);
	}
}

void	key_press_4(int keycode, t_fract *fract)
{
	if (keycode == 6)
	{
		fract->zoom_mid = 0;
		call_draw_init(fract);
	}
	if (keycode == 46)
	{
		fract->zoom_mid = 1;
		call_draw_init(fract);
	}
	if (keycode == 8)
	{
		fract->color_var = (fract->color_var + 1) % 14;
		call_draw(fract);
	}
	if (keycode == 84)
	{
		fract->type_d = 2;
		call_draw_init(fract);
	}
}

void	key_press_3(int keycode, t_fract *fract)
{
	if (keycode == 1)
	{
		fract->change_julia = 0;
		call_draw(fract);
	}
	if (keycode == 35)
	{
		fract->change_julia = 1;
		call_draw(fract);
	}
	if (keycode == 12)
	{
		fract->iteration += 2;
		call_draw(fract);
	}
	if (keycode == 13)
	{
		fract->iteration -= 2;
		if (fract->iteration < 4)
			fract->iteration = 4;
		call_draw(fract);
	}
}

void	key_press_2(int keycode, t_fract *fract)
{
	if (keycode == 124)
	{
		fract->move_x += 0.01;
		call_draw(fract);
	}
	if (keycode == 123)
	{
		fract->move_x -= 0.01;
		call_draw(fract);
	}
	if (keycode == 126)
	{
		fract->move_y -= 0.01;
		call_draw(fract);
	}
	if (keycode == 125)
	{
		fract->move_y += 0.01;
		call_draw(fract);
	}
}

int		key_press(int keycode, t_fract *fract)
{
	if (keycode == 53)
	{
		mlx_destroy_image(fract->mlx_ptr, fract->img_ptr);
		mlx_destroy_window(fract->mlx_ptr, fract->win_ptr);
		free_fract(fract);
		exit(1);
	}
	if (keycode == 69)
	{
		fract->zoom += 0.5;
		call_draw(fract);
	}
	if (keycode == 78)
	{
		fract->zoom -= 0.5;
		call_draw(fract);
	}
	key_press_2(keycode, fract);
	key_press_3(keycode, fract);
	key_press_4(keycode, fract);
	key_press_5(keycode, fract);
	return (0);
}
