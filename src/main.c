/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 20:22:21 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/12/27 15:10:48 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include <stdio.h>
#include "fractol.h"

void	init_var_fract(t_fract *fract)
{
	fract->cre = 0;
	fract->cim = 0;
	fract->zoom = 1;
	fract->move_x = 0;
	fract->move_y = 0;
	fract->change_julia = 1;
	fract->iteration = 50;
	fract->re_min = -2;
	fract->re_max = 2;
	fract->im_min = -2;
	fract->im_max = 2;
	fract->color_var = 0;
}

void	init_fract(t_fract *fract)
{
	fract->zoom_mid = 1;
	fract->mand_version = 1;
	init_var_fract(fract);
}

void	free_fract(t_fract *fract)
{
	t_fract *fract_tracker;

	fract_tracker = fract;
	free(fract_tracker);
}

int		main(int argc, char **argv)
{
	t_fract	*fract;

	if (argc == 2)
	{
		if (!(fract = (t_fract*)malloc(sizeof(t_fract))))
			exit(1);
		if ((type_drawing(argv, fract)) != 0)
		{
			init_fract(fract);
			init_mlx_win(fract);
			draw_fract(fract);
			mlx_hook_function(fract);
		}
		else
			free_fract(fract);
	}
	else
	{
		ft_putendl("Error");
		ft_putstr("./fract Mandelbrot | Julia | Tricorn | Burning_ship");
		ft_putendl(" | Mandbat");
		return (0);
	}
	return (0);
}
