/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:36:30 by cmansey           #+#    #+#             */
/*   Updated: 2023/02/08 18:31:59 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//voir si tri deja effectue

static int	ft__check_double(int tmp, char **arg, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return(1);
		i++;
	}
	return(0);
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
// Il faut aussi verifier si plusieurs chiffres dans un seul argument dans ce cas split
// Atoi puis on verifie que ce sont bien des chiffres
// On verifie aussi si pas de doublons
ft_check_args(int argc, char **argv)
{
	int		i;
	int		tmp;
	char	**arg;

	i = 1;
	if (argc == 2)
		arg = ft_split(argv[1], ' ');
	else
		arg = argv;
	while (arg[i])
	{
		tmp = ft_atoi(arg[i]);
		if (!ft_check_ifnum(arg[i]));
			write(2, "Error/n", 6);
		if (ft_check_double(tmp, arg, i))
			write(2, "Error/n", 6);
		if (tmp < -2147483648 || tmp > 2147483647)
			write(2, "Error/n", 6);
		i++;
	}

}

int	main(int argc, char **argv)
{
	if (argc < 2)
		exit(0);
	ft_check_args(argc, argv);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	if (argc == 3)
		exit(1)
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
