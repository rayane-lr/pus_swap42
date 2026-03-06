/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_safe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralarbi <ralarbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:37:29 by ralarbi           #+#    #+#             */
/*   Updated: 2026/03/06 17:05:10 by ralarbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ft_atoi sécurisé
int ft_atoi_check(const char *str, int *out)
{
    long res = 0;
    int sign = 1;
    int i = 0;

    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    if (str[i] < '0' || str[i] > '9')
        return 0;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        res = res * 10 + (str[i] - '0');
        if (res * sign > INT_MAX || res * sign < INT_MIN)
            return 0;
        i++;
    }
    *out = (int)(res * sign);
    return 1;
}