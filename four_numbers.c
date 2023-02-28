/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:07:33 by cmansey           #+#    #+#             */
/*   Updated: 2023/02/27 17:55:40 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_and_rotate_a(long *sta, long *stb, int *nb_sta, int *nb_stb)
{
	push_a(sta, stb, nb_sta, nb_stb);
	rotate_a(sta, nb_sta);
}

void	move(long *sta, long *stb, int *nb_sta, int *nb_stb)
{
	if (sta[0] > stb[0])
		push_a(sta, stb, nb_sta, nb_stb);
	else if (sta[2] < stb[0])
		push_and_rotate_a(sta, stb, nb_sta, nb_stb);
	else if ((sta[0] < stb[0]) && (sta[1] > stb[0]))
	{
		rotate_a(sta, nb_sta);
		push_a(sta, stb, nb_sta, nb_stb);
		rev_rotate_a(sta, nb_sta);
	}
	else if ((sta[1] < stb[0]) && (sta[2] > stb[0]))
	{
		rev_rotate_a(sta, nb_sta);
		push_a(sta, stb, nb_sta, nb_stb);
		rev_rotate_a(sta, nb_sta);
		rev_rotate_a(sta, nb_sta);
	}
}

void	four_numbers(long *sta, long *stb, int *nb_sta, int *nb_stb)
{
	push_b(sta, stb, nb_sta, nb_stb);
	three_numbers(sta, nb_sta);
	if (*nb_sta == 3)
		move(sta, stb, nb_sta, nb_stb);
}
