/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:17:12 by cmansey           #+#    #+#             */
/*   Updated: 2023/03/02 11:37:53 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_stack(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ')
			{
				j++;
				i++;
			}
		}
	}
	else
		j = argc - 1;
	return (j);
}

int	check_order(long *sta, int *nb_sta)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while ((i < *nb_sta) && (j <= *nb_sta))
	{
		if (sta[i] < sta[j])
		{
			i++;
			j++;
		}
		else
			return (1);
	}
	return (0);
}
