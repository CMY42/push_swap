/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rev_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:45:46 by cmansey           #+#    #+#             */
/*   Updated: 2023/02/22 16:54:01 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a(long *sta, int *nb_sta)
{
	int		i;
	long	tmp;

	i = *nb_sta - 1;
	tmp = sta[*nb_sta - 1];
	while (i > 0)
	{
		sta[i] = sta[i - 1];
		i--;
	}
	sta[0] = tmp;
	write (1, "rra\n", 4);
}

void	rev_rotate_b(long *stb, int *nb_stb)
{
	int		i;
	long	tmp;

	i = *nb_stb - 1;
	tmp = stb[*nb_stb - 1];
	while (i > 0)
	{
		stb[i] = stb[i - 1];
		i--;
	}
	stb[0] = tmp;
	write (1, "rrb\n", 4);
}

void	rev_rotate_rr(long *sta, long *stb, int *nb_stb, int *nb_sta)
{
	int		i;
	long	tmp;

	i = *nb_sta - 1;
	tmp = sta[*nb_sta - 1];
	while (i > 0)
	{
		sta[i] = sta[i - 1];
		i--;
	}
	sta[0] = tmp;
	i = *nb_stb - 1;
	tmp = stb[*nb_stb - 1];
	while (i > 0)
	{
		stb[i] = stb[i - 1];
		i--;
	}
	stb[0] = tmp;
	write (1, "rrr\n", 4);
}
