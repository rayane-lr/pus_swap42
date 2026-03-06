/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralarbi <ralarbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:35:35 by ralarbi           #+#    #+#             */
/*   Updated: 2026/03/06 17:05:16 by ralarbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(t_node **stack)
{
    t_node *first;
    t_node *last;

    if (!stack || !*stack || !(*stack)->next)
        return;
    first = *stack;
    last = *stack;
    while (last->next)
        last = last->next;
    *stack = first->next;
    first->next = NULL;
    last->next = first;
}

void ra(t_node **a)
{
    rotate(a);
    write(1, "ra\n", 3);
}

void rb(t_node **b)
{
    rotate(b);
    write(1, "rb\n", 3);
}

void rr(t_node **a, t_node **b)
{
    rotate(a);
    rotate(b);
    write(1, "rr\n", 3);
}