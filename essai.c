/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   essai.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:32:19 by cmansey           #+#    #+#             */
/*   Updated: 2023/03/02 11:37:19 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
		{
			printf("La liste n'est pas triée");
			return (1);
		}
	}
	printf("La liste est triée");
	return (0);
}

int	main(void)
{
	long sta[] = {0, 2, 3, 4, 5};
	int nb_sta[] = {5};
	check_order(sta, nb_sta);
	return 0;
}
