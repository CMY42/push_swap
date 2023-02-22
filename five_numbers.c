/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:57:58 by cmansey           #+#    #+#             */
/*   Updated: 2023/02/22 18:53:23 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_and_rotate(long *sta, long *stb, int *nb_sta, int *nb_stb)
{
	push_a(sta, stb, nb_sta, nb_stb);
	rotate_a(sta, nb_sta);
}

void	first_move(long *sta, long *stb, int *nb_sta, int *nb_stb)
{
	if (sta[0] > stb[0])
		push_a(sta, stb, nb_sta, nb_stb);
	else if (sta[2] < stb[0])
		push_and_rotate(sta, stb, nb_sta, nb_stb);
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

void	second_move(long *sta, long *stb, int *nb_sta, int *nb_stb)
{
	if (sta[0] > stb[0])
		push_a(sta, stb, nb_sta, nb_stb);
	else if (sta[3] < stb[0])
		push_and_rotate(sta, stb, nb_sta, nb_stb);
	else if ((sta[0] < stb[0]) && (sta[1] > stb[0]))
	{
		rotate_a(sta, nb_sta);
		push_a(sta, stb, nb_sta, nb_stb);
		rev_rotate_a(sta, nb_sta);
	}
	else if ((sta[1] < stb[0]) && (sta[2] > stb[0]))
	{
		rotate_a(sta, nb_sta);
		push_a(sta, stb, nb_sta, nb_stb);
		swap_a(sta, nb_sta);
		rev_rotate_a(sta, nb_sta);
	}
	else if ((sta[2] < stb[0]) && (sta[3] > stb[0]))
	{
		rev_rotate_a(sta, nb_sta);
		push_and_rotate(sta, stb, nb_sta, nb_stb);
		rotate_a(sta, nb_sta);
	}
}

void	five_numbers(long *sta, long *stb, int *nb_sta, int *nb_stb)
{
	push_b(sta, stb, nb_sta, nb_stb);
	push_b(sta, stb, nb_sta, nb_stb);
	three_numbers(sta, nb_sta);
	while (*nb_stb != 0)
	{
		if (*nb_sta == 3)
			first_move(sta, stb, nb_sta, nb_stb);
		if (*nb_sta == 4)
			second_move(sta, stb, nb_sta, nb_stb);
	}
}
