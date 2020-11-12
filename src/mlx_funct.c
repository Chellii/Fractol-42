/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_funct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 13:34:38 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/12/27 14:05:08 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_mlx_win(t_fract *fract)
{
	fract->mlx_ptr = mlx_init();
	fract->win_ptr = mlx_new_window(fract->mlx_ptr, 1000, 800, "Fract'ol");
}

void	mlx_hook_function(t_fract *fract)
{
	mlx_hook(fract->win_ptr, 2, 0, key_press, fract);
	mlx_hook(fract->win_ptr, 4, 0, mouse_press, fract);
	mlx_hook(fract->win_ptr, 6, 0, mouse_move, fract);
	mlx_loop(fract->mlx_ptr);
}

void	mlx_destroy(t_fract *fract)
{
	mlx_destroy_image(fract->mlx_ptr, fract->img_ptr);
	mlx_clear_window(fract->mlx_ptr, fract->win_ptr);
}

void	init_img_mlx(t_fract *fract)
{
	fract->img_ptr = mlx_new_image(fract->mlx_ptr, 1000, 800);
	fract->mlx_img_data = (int *)mlx_get_data_addr(fract->img_ptr,
			&(fract->bpp), &(fract->size_l), &(fract->endian));
}

void	img_mlx_color(t_fract *fract)
{
	int i;
	int j;

	i = 800;
	while (i < 1000)
	{
		j = 0;
		while (j < 800)
		{
			fract->mlx_img_data[j * 1000 + i] = color_rgb(4, 2, 79);
			j++;
		}
		i++;
	}
	mlx_put_image_to_window(fract->mlx_ptr, fract->win_ptr,
			fract->img_ptr, 0, 0);
}
