/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:12:08 by cmansey           #+#    #+#             */
/*   Updated: 2023/02/27 18:44:56 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_nb(int *nb_sta, int *nb_stb)
{
	free (nb_sta);
	free (nb_stb);
}

void	free_stack(long *stack_a, long *stack_b)
{
	free (stack_a);
	free (stack_b);
}
