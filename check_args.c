/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:16:49 by cmansey           #+#    #+#             */
/*   Updated: 2023/02/27 19:12:48 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_double(int tmp, char **arg, int i)
{
	i++;
	while (arg[i])
	{
		if (ft_atoi(arg[i]) == tmp)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_check_ifnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i ++;
	}
	return (1);
}

// On va checker le nombre d'arguments
// Voir si plusieurs chiffres dans un seul argument dans ce cas split
// Atoi puis on verifie que ce sont bien des chiffres
// On verifie aussi si pas de doublons

void	ft_check_args(int argc, char **argv)
{
	int			i;
	long int	tmp;
	char		**arg;

	i = 1;
	if (argc == 2)
		arg = ft_split(argv[1], ' ');
	else
		arg = argv;
	while (arg[i])
	{
		tmp = ft_atoi(arg[i]);
		if (!ft_check_ifnum(arg[i]))
			write(2, "Error/n", 6);
		if (ft_check_double(tmp, arg, i))
			write(2, "Error/n", 6);
		if ((tmp < -2147483648) || (tmp > 2147483647))
			write(2, "Error/n", 6);
		i++;
	}
}
