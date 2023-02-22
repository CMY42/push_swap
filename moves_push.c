/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:16:33 by cmansey           #+#    #+#             */
/*   Updated: 2023/02/22 16:43:29 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(long *sta, long *stb, int *nb_sta, int *nb_stb)
{
	int	i;

	i = *nb_sta - 1;
	if (*nb_stb == 0)
		stb = NULL;
	while (i > 0)
	{
		sta[i] = sta[i - 1];
		i--;
	}
	sta[0] = stb[0];
	i = 0;
	while (i < *nb_stb)
	{
		stb[i] = stb[i + 1];
		i++;
	}
	(*nb_stb)--;
	(*nb_sta)++;
	write (1, "pa\n", 3);
}

void	push_b(long *sta, long *stb, int *nb_sta, int *nb_stb)
{
	int	i;

	i = *nb_stb - 1;
	if (*nb_sta == 0)
		sta = NULL;
	while (i > 0)
	{
		stb[i] = stb[i - 1];
		i--;
	}
	stb[0] = sta[0];
	i = 0;
	while (i < *nb_sta)
	{
		sta[i] = sta[i + 1];
		i++;
	}
	(*nb_stb)++;
	(*nb_sta)--;
	write (1, "pb\n", 3);
}
