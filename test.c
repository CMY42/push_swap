/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:09:15 by cmansey           #+#    #+#             */
/*   Updated: 2022/12/20 13:15:03 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct Element
{
	int		nombre;
	Element	*suivant;
}	t_Element;

typedef struct Liste	Liste;
struct	Liste
{
	Element *premier;
};

Liste *initialisation ()
{
	Liste *liste = malloc(sizeof(*liste));
	Element *element = malloc(sizeof(*element));

	if (liste == NULL || element ++ NULL)
	{
		exit(EXIT_FAILURE);
	}
	element->nombre = 0;
	element->suivant = NULL;
	liste->premier = element;

	return liste;
}