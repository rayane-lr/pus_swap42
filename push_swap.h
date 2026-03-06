/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralarbi <ralarbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:15:09 by ralarbi           #+#    #+#             */
/*   Updated: 2026/03/06 17:04:49 by ralarbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"

// -------------------- STRUCTURE --------------------
typedef struct s_node
{
    int             value;
    struct s_node   *next;
} t_node;

// -------------------- LIST UTILS --------------------
t_node *new_node(int value);
void add_back(t_node **stack, t_node *new);
int has_duplicate(t_node *stack, int value);
void free_stack(t_node **stack);
int ft_atoi_check(const char *str, int *out);

// -------------------- OPERATIONS --------------------
void sa(t_node **a);
void sb(t_node **b);
void ss(t_node **a, t_node **b);
void pa(t_node **a, t_node **b);
void pb(t_node **a, t_node **b);
void ra(t_node **a);
void rb(t_node **b);
void rr(t_node **a, t_node **b);
void rra(t_node **a);
void rrb(t_node **b);
void rrr(t_node **a, t_node **b);
    
#endif