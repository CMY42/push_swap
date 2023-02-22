/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:36:30 by cmansey           #+#    #+#             */
/*   Updated: 2023/02/22 18:52:22 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//voir si tri deja effectue

void	set_nb(int *nb_sta, int *nb_stb, int argc)
{
	*nb_sta = argc -1;
	*nb_stb = 0;
}

int	main(int argc, char **argv)
{
	int		i;
	long	*stack_a;
	long	*stack_b;
	int		*nb_sta;
	int		*nb_stb;

	nb_sta = malloc(sizeof(int));
	nb_stb = malloc(sizeof(int));
	if (!nb_sta || !nb_stb)
	{
		return (0);
		free (nb_sta);
		free (nb_stb);
	}
	set_nb(nb_sta, nb_stb, argc);
	ft_check_args(argc, argv);
	stack_a = malloc(sizeof(long) * (argc - 1));
	stack_b = malloc(sizeof(long) * (argc - 1));
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
	i = 0;
	while (i != (argc -1))
	{
		printf("%ld\n", stack_a[i]);
		i++;
	}
	if (argc > 3)
		five_numbers(stack_a, stack_b, nb_sta, nb_stb);
	i = 0;
	while (i != (argc -1))
	{
		printf("%ld\n", stack_a[i]);
		i++;
	}
	/*j = 0;
	while (j < i)
	{
		printf("%d\n", stack_b[j]);
		j++;
	}*/
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
