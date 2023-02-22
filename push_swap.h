/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:45:51 by cmansey           #+#    #+#             */
/*   Updated: 2023/02/22 17:10:17 by cmansey          ###   ########.fr       */
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
void	swap_a(long *sta, int *nb_sta);
void	push_a(long *sta, long *stb, int *nb_sta, int *nb_stb);
void	push_b(long *sta, long *stb, int *nb_sta, int *nb_stb);
void	rotate_a(long *sta, int *nb_sta);
void	rev_rotate_a(long *sta, int *nb_sta);
void	three_numbers(long *sta);

#endif
