/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:45:51 by cmansey           #+#    #+#             */
/*   Updated: 2023/03/01 18:56:07 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

void	ft_check_args(int argc, char **argv);
void	free_nb(int *nb_sta, int *nb_stb);
void	free_stack(long *stack_a, long *stack_b);
void	free_all(long *stack_a, long *stack_b, int *nb_sta, int *nb_stb);
int		size_stack(int argc, char **argv);
int		check_order(long *sta, int *nb_sta);
long	*normalize(int argc, char **argv, long *sta);

void	swap_a(long *sta, int *nb_sta);
void	push_a(long *sta, long *stb, int *nb_sta, int *nb_stb);
void	push_b(long *sta, long *stb, int *nb_sta, int *nb_stb);
void	rotate_a(long *sta, int *nb_sta);
void	rev_rotate_a(long *sta, int *nb_sta);
void	push_and_rotate_a(long *sta, long *stb, int *nb_sta, int *nb_stb);

void	three_numbers(long *sta, int *nb_sta);
void	four_numbers(long *sta, long *stb, int *nb_sta, int *nb_stb);
void	five_numbers(long *sta, long *stb, int *nb_sta, int *nb_stb);
void	six_and_more(long *sta, long *stb, int *nb_sta, int *nb_stb);

#endif
