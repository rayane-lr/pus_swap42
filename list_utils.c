/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralarbi <ralarbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:40:45 by ralarbi           #+#    #+#             */
/*   Updated: 2026/03/09 18:04:02 by ralarbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// créer un nœud
t_node *new_node(int value)
{
    t_node *node = malloc(sizeof(t_node));
    if (!node)
        return NULL;
    node->value = value;
    node->next = NULL;
    return node;
}

// ajouter à la fin
void add_back(t_node **stack, t_node *new)
{
    t_node *tmp;

    if (!*stack)
    {
        *stack = new;
        return;
    }
    tmp = *stack;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new;
}

// vérifier doublons
int has_duplicate(t_node *stack, int value)
{
    while (stack)
    {
        if (stack->value == value)
            return 1;
        stack = stack->next;
    }
    return 0;
}

// libérer une liste
void free_stack(t_node **stack)
{
    t_node *tmp;

    while (*stack)
    {
        tmp = (*stack)->next;
        free(*stack);
        *stack = tmp;
    }
}
