/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 16:05:06 by cel-oiri          #+#    #+#             */
/*   Updated: 2020/01/02 17:20:46 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"
# include <math.h>

typedef struct	s_draw_var
{
	double	cre;
	double	cim;
	double	zi;
	double	zr;
	double	zr_old;
	int		iteration;
}				t_draw_var;

typedef struct	s_fract
{
	double		cim;
	double		cre;
	double		im_max;
	double		im_min;
	double		re_max;
	double		re_min;
	double		move_x;
	double		move_y;
	double		zoom;
	double		change_julia;
	double		iteration;
	int			color_var;
	int			type_d;
	int			zoom_mid;
	void		*mlx_ptr;
	void		*win_ptr;
	void		*img_ptr;
	int			*mlx_img_data;
	int			bpp;
	int			size_l;
	int			endian;
	int			mand_version;
}				t_fract;

void			call_draw(t_fract *fract);
void			call_draw_init(t_fract *fract);
int				color_rgb(int r, int g, int b);
void			draw_burning_ship(int x, int y, t_fract *fract);
void			draw_fract(t_fract *fract);
void			draw_julia(int x, int y, t_fract *fract);
void			draw_mand(int x, int y, t_fract *fract);
void			draw_mand_2(int x, int y, t_fract *fract);
void			draw_mand_3(int x, int y, t_fract *fract);
void			draw_mand_4(int x, int y, t_fract *fract);
void			draw_mand_5(int x, int y, t_fract *fract);
void			draw_mandbat(int x, int y, t_fract *fract);
void			draw_tricorn(int x, int y, t_fract *fract);
void			equa_zoom_mid(t_draw_var *dvar, t_fract *fract, int x, int y);
void			equa_zoom_mouse(t_draw_var *dvar, t_fract *fract, int x, int y);
void			free_fract(t_fract *fract);
void			img_mlx_color(t_fract *fract);
void			init_img_mlx(t_fract *fract);
void			init_mlx_win(t_fract *fract);
void			init_var_fract(t_fract *fract);
int				key_press(int keycode, t_fract *fract);
void			menu(t_fract *fract);
void			menu_x2_color(t_fract *fract, int color);
void			menu_x3_color(t_fract *fract, int color);
void			menu_x4_color(t_fract *fract, int color);
void			menu_x5_color(t_fract *fract, int color);
void			mlx_destroy(t_fract *fract);
void			mlx_hook_function(t_fract *fract);
int				mouse_move(int x, int y, t_fract *fract);
int				mouse_press(int button, int x, int y, t_fract *fract);
void			mouse_press_menu(int x, int y, t_fract *fract);
void			set_color(t_fract *fract, int iteration, int x, int y);
int				type_drawing(char **av, t_fract *fract);

#endif
