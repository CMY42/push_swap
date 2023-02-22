/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:19:19 by cmansey           #+#    #+#             */
/*   Updated: 2023/02/22 16:43:17 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(long *sta, int *nb_sta)
{
	int		i;
	long	tmp;

	i = 0;
	tmp = sta[0];
	while (i < *nb_sta)
	{
		sta[i] = sta[i + 1];
		i++;
	}
	sta[*nb_sta - 1] = tmp;
	write (1, "ra\n", 3);
}

void	rotate_b(long *stb, int *nb_stb)
{
	int		i;
	long	tmp;

	i = 0;
	tmp = stb[0];
	while (i < *nb_stb)
	{
		stb[i] = stb[i + 1];
		i++;
	}
	stb[*nb_stb - 1] = tmp;
	write (1, "rb\n", 3);
}

void	rotate_rr(long *stb, long *sta, int *nb_sta, int *nb_stb)
{
	int		i;
	long	tmp;

	i = 0;
	tmp = sta[0];
	while (i < *nb_sta)
	{
		sta[i] = sta[i + 1];
		i++;
	}
	sta[*nb_sta - 1] = tmp;
	i = 0;
	tmp = stb[0];
	while (i < *nb_stb)
	{
		stb[i] = stb[i + 1];
		i++;
	}
	stb[*nb_stb - 1] = tmp;
	write (1, "rt\n", 3);
}
