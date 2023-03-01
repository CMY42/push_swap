/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   six_and_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:22:31 by cmansey           #+#    #+#             */
/*   Updated: 2023/03/01 18:54:43 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	six_and_more(long *sta, int *nb_sta)
{
	int	i;
	int	nb;
	int	bits;
	int	max_bits;

	i = 0;
	bits = 0;
	nb = *nb_sta - 1;
	max_bits = 0;
	while ((nb >> max_bits) != 0)
		++max_bits;
	while (check_order(sta, nb_sta) && (bits < max_bits))
	{
		i = 0;
		while (i <= nb)
		{
			if ((sta[i] >> bits & 1) == 0)
				push_b(sta, stb, nb_sta, nb_stb);
			else
				rotate_a(sta, nb_sta);
			i++;
		}
		while (*stb)
			push_a(sta, stb, nb_sta, nb_stb);
		bits++;
	}*/
}
