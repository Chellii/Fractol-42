/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_press_menu.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 13:42:44 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/12/27 14:46:08 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	mouse_press_menu_3(int x, int y, t_fract *fract)
{
	if ((x >= 833 && x <= 951) && (y >= 205 && y <= 220))
	{
		fract->type_d = 4;
		call_draw_init(fract);
	}
	if ((x >= 834 && x <= 902) && (y >= 240 && y <= 255))
	{
		fract->type_d = 3;
		call_draw_init(fract);
	}
	if ((x >= 834 && x <= 903) && (y >= 274 && y <= 290))
	{
		fract->type_d = 5;
		call_draw_init(fract);
	}
}

void	mouse_press_menu_2(int x, int y, t_fract *fract)
{
	if ((x >= 804 && x <= 898) && (y >= 97 && y <= 118))
	{
		fract->mand_version = 1;
		fract->type_d = 1;
		call_draw_init(fract);
	}
	if ((x >= 959 && x <= 987) && (y >= 131 && y <= 154))
	{
		fract->mand_version = 5;
		call_draw_init(fract);
	}
	if ((x >= 834 && x <= 882) && (y >= 170 && y <= 184))
	{
		fract->type_d = 2;
		call_draw_init(fract);
	}
}

void	mouse_press_menu(int x, int y, t_fract *fract)
{
	if ((x >= 808 && x <= 836) && (y >= 131 && y <= 154))
	{
		fract->mand_version = 2;
		call_draw_init(fract);
	}
	if ((x >= 859 && x <= 887) && (y >= 131 && y <= 154))
	{
		fract->mand_version = 3;
		call_draw_init(fract);
	}
	if ((x >= 909 && x <= 937) && (y >= 131 && y <= 154))
	{
		fract->mand_version = 4;
		call_draw_init(fract);
	}
	mouse_press_menu_2(x, y, fract);
	mouse_press_menu_3(x, y, fract);
}
