/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:36:30 by cmansey           #+#    #+#             */
/*   Updated: 2023/03/06 18:38:40 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(long *stack_a, long *stack_b, int *nb_sta, int *nb_stb)
{
	if ((*nb_sta == 2) && (stack_a[0] > stack_a[1]))
		rotate_a(stack_a, nb_sta);
	else if (*nb_sta == 3)
		three_numbers(stack_a, nb_sta);
	else if ((*nb_sta == 4) && (check_order(stack_a, nb_sta)))
		four_numbers(stack_a, stack_b, nb_sta, nb_stb);
	else if ((*nb_sta == 5) && (check_order(stack_a, nb_sta)))
		five_numbers(stack_a, stack_b, nb_sta, nb_stb);
	else
		six_and_more(stack_a, stack_b, nb_sta, nb_stb);
}

void	set_nb(int *nb_sta, int *nb_stb, int argc)
{
	*nb_sta = argc -1;
	*nb_stb = 0;
}

int	main(int argc, char **argv)
{
	long	*stack_a;
	long	*stack_b;
	int		*nb_sta;
	int		*nb_stb;

	nb_sta = malloc(sizeof(int));
	nb_stb = malloc(sizeof(int));
	if (!nb_sta || !nb_stb)
		free_nb(nb_sta, nb_stb);
	if (argc == 1)
		exit (0);
	ft_check_args(argc, argv);
	set_nb(nb_sta, nb_stb, argc);
	stack_a = malloc(sizeof(long) * (size_stack(argc, argv)));
	stack_b = malloc(sizeof(long) * (size_stack(argc, argv)));
	if (!stack_a || !stack_b)
		free_stack(stack_a, stack_b);
	stack_a = normalize(argc, argv, stack_a);
	stack_b = fill_stack_b(argc, stack_b);
	push_swap(stack_a, stack_b, nb_sta, nb_stb);
	free_all(stack_a, stack_b, nb_sta, nb_stb);
}

	/*i = 0;
	while (i < (argc -1))
	{
		printf("%ld\n", stack_a[i]);
		i++;
	}
	i = 0;
	while (i < (argc -1))
	{
		printf("%ld\n", stack_b[i]);
		i++;
	}
}*/
