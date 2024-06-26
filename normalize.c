/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:51:41 by cmansey           #+#    #+#             */
/*   Updated: 2023/03/06 17:44:33 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*normalize(int argc, char **argv, long *sta)
{
	int		i;
	int		j;
	long	counter;

	i = 1;
	while (i < argc)
	{
		j = 1;
		counter = 0;
		while (j < argc)
		{
			if (ft_atol(argv[i]) > ft_atol(argv[j]))
				counter++;
			j++;
		}
		sta[i - 1] = counter;
		i++;
	}
	return (sta);
}
