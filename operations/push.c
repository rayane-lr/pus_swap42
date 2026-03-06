/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralarbi <ralarbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:34:52 by ralarbi           #+#    #+#             */
/*   Updated: 2026/03/06 17:05:25 by ralarbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_node **dest, t_node **src)
{
    t_node *tmp;

    if (!src || !*src)
        return;
    tmp = *src;
    *src = (*src)->next;
    tmp->next = *dest;
    *dest = tmp;
}

void pa(t_node **a, t_node **b)
{
    push(a, b);
    write(1, "pa\n", 3);
}

void pb(t_node **a, t_node **b)
{
    push(b, a);
    write(1, "pb\n", 3);
}