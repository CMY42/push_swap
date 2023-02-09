/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:36:30 by cmansey           #+#    #+#             */
/*   Updated: 2023/02/09 13:46:45 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//voir si tri deja effectue

int	main(int argc, char **argv)
{
	int	i;
	int	*stack_a;
	int	*stack_b;

	if (argc < 2)
		exit(0);
	ft_check_args(argc, argv);
	stack_a = malloc(sizeof (int) * argc);
	stack_b = malloc(sizeof (int) * argc);
	if (!stack_a || !stack_b)
	{
		return (0);
		free (stack_a);
		free (stack_b);
	}
	i = 1;
	while (i != argc)
	{
		stack_a[i - 1] = ft_atoi(argv[i]);
		stack_b[i - 1] = 0;
			i++;
	}
}

/*{
	if (argc == 1)
		exit(0);
	if (argc == 2)
		//si 1 arg faire une pile avec juste ce chiffre
	if (argc >= 3 && argc <= 6)
	{
		if (argc <= 4)
		//un algo tri pour 2 et 3
		if (argc > 4)
		//un algo tri pour 4 et 5
	}
	else

	if (argv >= '-2147483648' || argv <= '2147483647')
	{

	}
	else
		write (2, "Error\n", 6);
		exit(1);
}*/
