/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:31:39 by cmansey           #+#    #+#             */
/*   Updated: 2023/02/22 14:27:09 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(long *sta, int *nb_sta)
{
	long	tmp;

	if (*nb_sta > 1)
	{
		tmp = sta[0];
		sta[0] = sta[1];
		sta[1] = tmp;
	}
	write(1, "sa\n", 3);
}

void	swap_b(long *stb, int *nb_stb)
{
	long	tmp;

	if (*nb_stb > 1)
	{
		tmp = stb[0];
		stb[0] = stb[1];
		stb[1] = tmp;
	}
	write(1, "sb\n", 3);
}

void	swap_ab(long *sta, long *stb, int *nb_sta, int *nb_stb)
{
	long	tmp_a;
	long	tmp_b;

	if (*nb_sta > 1)
	{
		tmp_a = sta[0];
		sta[0] = sta[1];
		sta[1] = tmp_a;
	}
	if (*nb_stb > 1)
	{
		tmp_b = stb[0];
		stb[0] = stb[1];
		stb[1] = tmp_b;
	}
	write(1, "ss\n", 3);
}
