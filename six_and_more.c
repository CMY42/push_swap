/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   six_and_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:22:31 by cmansey           #+#    #+#             */
/*   Updated: 2023/03/02 14:08:23 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	six_and_more(long *sta, long *stb, int *nb_sta, int *nb_stb)
{
	int	i;
	int	nb;
	int	bits;
	int	maxbits;

	bits = 0;
	maxbits = 0;
	nb = *nb_sta - 1;
	while ((nb >> maxbits) != 0)
		++maxbits;
	while (bits < maxbits && check_order(sta, nb_sta))
	{
		i = 0;
		while (i <= nb)
		{
			if ((sta[0] >> bits & 1) == 0)
				push_b(sta, stb, nb_sta, nb_stb);
			else if (((sta[0] >> bits & 1) == 1) && i < nb)
				rotate_a(sta, nb_sta);
			i++;
		}
		while (*nb_stb)
			push_a(sta, stb, nb_sta, nb_stb);
		bits++;
	}
}
