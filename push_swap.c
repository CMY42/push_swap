/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:47:44 by cmansey           #+#    #+#             */
/*   Updated: 2022/12/20 15:23:00 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Ma structure de Node
typedef struct node
{
	int			data;
	struct node	*next;
	struct node	*prev;
}	t_node;

//Mon node renvoyant a lui meme
//On a besoin du pointeur sur le premier node
//Et d'un pointeur sur le node precedent
struct node	*set_list(char **av)
{
	t_node	*node_last;
	t_node	*node_first;
	t_node	*node;

	*node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->data = ft_atoi(av[1]);
	node->prev = node;
	node->next = node;
	node_first = node;
	others_nodes(av, &node_first, &node_last, &node);
	node_last = node;
	node = node->next;
	node->prev = node_last;
	return (node);
}

//RAJOUTER UN IF
void	others_nodes(av, node_first, node_last, node)
{
	t_node	*node_next;

	node_next = malloc(sizeof(t_node));
	node_next->data = ft_atoi(av[1]);
	node_next->next = node_first;
	node->next = node_next;
	node_last = node;
	node = node->next;
	node->prev = node_last;
}

//Verifie si liste chainee contient seulement un ou plusieurs nodes
//Si un seul node met la liste chainee a NULL
//Si contient plusieurs on va devoir lie le precedent node
//au suivant en se placant du node qu'on supprime
void	delete_node(t_node *from)
{
	if (from == from->next)
		from = NULL;
	else
	{
		from->prev->next = from->next;
		fron->next->prev = from->prev;
		from = from->next;
	}
}

//Pour pa pb on utilise le delete_node precedement car on va supprimer un node
//Ici on sauvegarde le node qu'on va supprimer
//puis on supprime le int de la liste chainee
//Le dernier node doit pointer sur le nouveau premier node
void	push_to_other_list(t_node *from, t_node **to)
{
	t_node	*save;
	t_node	*stock;

	if (!from)
		return (NULL);
	save = from;
	delete_node(from);
	if (to)
	{
		stock = to->prev;
		to->prev = save;
		to->prev->next = to;
		to->prev->prev = stock;
		to->prev->prev->next = save;
		to = to->prev;
	}
	else
	{
		to = save;
		to->next = to;
		to->prev = to;
	}
}

//pour ra rb rr le premier element devient le dernier
//ici comme on a une liste double circulaire pas de probleme
//on bouge le pointeur du premier au dernier node
void	first_to_end(t_node *list)
{
	list = list->next;
}

//pour rra rrb rrr le premier element devient le dernier
//ici comme on a une liste double circulaire pas de probleme
//on bouge le pointeur du dernier au premier node
void	end_to_first(t_node *list)
{
	list = list->prev;
}





//premiere fonction on va mettre les chiffres dans la stakc A si pas erreur
//on verifie aussi si nombres deja dans l'ordre, si c'est le cas on stop
void	stack_a(void)
{
//
}

//si 3 nombres on doit faire en 3 instructions max
//si 5 nombres on doit faire en 12 instructions max
//on va creer une premiere fonction pour gerer en dessous de 5
void	small_stack(void)
{
//
}

//100 nombres max 700 actions
//500 nombres max 5500 actions
//si au dessus de 5 on a une autre fonction
//Radix?? Probleme negatif !!
void	big_stack(void)
{
//
}
