/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:17:12 by cmansey           #+#    #+#             */
/*   Updated: 2023/03/01 19:04:51 by cmansey          ###   ########.fr       */
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

#include <stdio.h>

int is_sorted(int arr[], int n) {
    if (n <= 1) {
        // une liste vide ou d'une seule élément est triée par défaut
        return 1;
    } else {
        // comparer l'élément actuel avec le suivant
        int is_current_smaller_or_equal = (arr[0] <= arr[1]);
        // parcourir la liste récursivement en vérifiant chaque paire d'éléments
        int is_rest_sorted = is_sorted(arr + 1, n - 1);
        // si la liste actuelle et la liste restante sont triées, retourner 1, sinon 0
        return is_current_smaller_or_equal && is_rest_sorted;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = is_sorted(arr, n);
    printf("La liste est triée : %s\n", result ? "oui" : "non");
    return 0;
}
