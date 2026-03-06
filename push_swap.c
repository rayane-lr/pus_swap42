/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralarbi <ralarbi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:15:05 by ralarbi           #+#    #+#             */
/*   Updated: 2026/03/04 12:12:44 by ralarbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_node *stack_a = NULL;
    t_node *stack_b = NULL;
    int value;
    int i;

    if (argc < 2)
        return (0);

    i = 1;
    while (i < argc)
    {
        if (!ft_atoi_check(argv[i], &value) || has_duplicate(stack_a, value))
        {
            write(2, "Error\n", 6);
            free_stack(&stack_a);
            return (1);
        }
        add_back(&stack_a, new_node(value));
        i++;
    }

    // Ici tu lanceras la logique push_swap

    free_stack(&stack_a);
    free_stack(&stack_b);

    return (0);
}