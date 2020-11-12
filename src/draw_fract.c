/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_fract.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 13:46:26 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/12/27 13:50:09 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	call_draw_init(t_fract *fract)
{
	mlx_destroy(fract);
	init_var_fract(fract);
	draw_fract(fract);
}

void	call_draw(t_fract *fract)
{
	mlx_destroy(fract);
	draw_fract(fract);
}

int		type_drawing(char **av, t_fract *fract)
{
	if (ft_strcmp(av[1], "Mandelbrot") == 0)
		fract->type_d = 1;
	else if (ft_strcmp(av[1], "Julia") == 0)
		fract->type_d = 2;
	else if (ft_strcmp(av[1], "Tricorn") == 0)
		fract->type_d = 3;
	else if (ft_strcmp(av[1], "Burning_ship") == 0)
		fract->type_d = 4;
	else if (ft_strcmp(av[1], "Mandbat") == 0)
		fract->type_d = 5;
	else
	{
		ft_putendl("Error");
		ft_putstr("./fract Mandelbrot | Julia | Tricorn | Burning_ship");
		ft_putendl(" | Mandbat");
		return (0);
	}
	return (fract->type_d);
}

void	draw_mand_version(int x, int y, t_fract *fract)
{
	if (fract->mand_version == 1)
		draw_mand(x, y, fract);
	else if (fract->mand_version == 2)
		draw_mand_2(x, y, fract);
	else if (fract->mand_version == 3)
		draw_mand_3(x, y, fract);
	else if (fract->mand_version == 4)
		draw_mand_4(x, y, fract);
	else if (fract->mand_version == 5)
		draw_mand_5(x, y, fract);
}

void	draw_fract(t_fract *fract)
{
	int x;
	int y;

	x = 0;
	init_img_mlx(fract);
	while (x++ < 800)
	{
		y = 0;
		while (y < 800)
		{
			if (fract->type_d == 1)
				draw_mand_version(x, y, fract);
			else if (fract->type_d == 2)
				draw_julia(x, y, fract);
			else if (fract->type_d == 3)
				draw_tricorn(x, y, fract);
			else if (fract->type_d == 4)
				draw_burning_ship(x, y, fract);
			else if (fract->type_d == 5)
				draw_mandbat(x, y, fract);
			y++;
		}
	}
	img_mlx_color(fract);
	menu(fract);
}
