/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:12:08 by cmansey           #+#    #+#             */
/*   Updated: 2023/03/01 13:27:06 by cmansey          ###   ########.fr       */
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

void	free_all(long *stack_a, long *stack_b, int *nb_sta, int *nb_stb)
{
	free (nb_sta);
	free (nb_stb);
	free (stack_a);
	free (stack_b);
}
