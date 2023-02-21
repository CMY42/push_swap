/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_swap.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:48:40 by cmansey           #+#    #+#             */
/*   Updated: 2023/02/20 18:10:14 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(long *sta)
{
	int	tmp;

	tmp = sta[0];
	sta[0] = sta[1];
	sta[1] = tmp;
	write(1, "sa\n", 3);
}

void	swap_b(int *stb)
{
	int	tmp;

	tmp = stb[0];
	stb[0] = stb[1];
	stb[1] = tmp;
	write(1, "sb\n", 3);
}

void	swap_ab(int *sta, int *stb)
{
	int	tmp_a;
	int	tmp_b;

	tmp_a = sta[0];
	sta[0] = sta[1];
	sta[1] = tmp_a;
	tmp_b = stb[0];
	stb[0] = stb[1];
	stb[1] = tmp_b;
	write(1, "ss\n", 3);
}
