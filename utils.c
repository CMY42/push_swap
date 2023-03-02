/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:17:12 by cmansey           #+#    #+#             */
/*   Updated: 2023/03/02 16:10:11 by cmansey          ###   ########.fr       */
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
			if (ft_atoi(argv[i]) > ft_atoi(argv[j]))
				counter++;
			j++;
		}
		sta[i - 1] = counter;
		i++;
	}
	return (sta);
}

long	*fill_stack_b(int argc, long *stack_b)
{
	int	i;

	i = 1;
	while (i != argc)
	{
		stack_b[i - 1] = '\0';
			i++;
	}
	return (stack_b);
}

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
