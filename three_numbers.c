/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:02:11 by cmansey           #+#    #+#             */
/*   Updated: 2023/02/22 17:53:47 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_numbers(long *sta, int *nb_sta)
{
	if ((sta[0] > sta[1]) && (sta[0] < sta[2]) && (sta[1] < sta[2]))
		swap_a(sta, nb_sta);
	else if ((sta[0] > sta[1]) && (sta[1] > sta[2]) && (sta[0] > sta[2]))
	{
		swap_a(sta, nb_sta);
		rev_rotate_a(sta, nb_sta);
	}
	else if ((sta[0] > sta[1]) && (sta[1] < sta[2]) && (sta[0] > sta[2]))
		rotate_a(sta, nb_sta);
	else if ((sta[0] < sta[1]) && (sta[1] > sta[2]) && (sta[0] < sta[2]))
	{
		swap_a(sta, nb_sta);
		rotate_a(sta, nb_sta);
	}
	else if ((sta[0] < sta[1]) && (sta[1] > sta[2]) && (sta[0] > sta[2]))
		rev_rotate_a(sta, nb_sta);
}
