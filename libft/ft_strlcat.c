/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralarbi <ralarbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:34:28 by ralarbi           #+#    #+#             */
/*   Updated: 2026/01/21 18:32:44 by ralarbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	if (size == 0 || (dst == NULL && src == NULL))
		return (ft_strlen(src));
	len_dst = 0;
	len_src = 0;
	while (dst[len_dst] && len_dst < size)
		len_dst++;
	while (src[len_src])
		len_src++;
	if (len_dst == size)
		return (size + len_src);
	i = 0;
	while (src[i] && (len_dst + i + 1) < size)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
