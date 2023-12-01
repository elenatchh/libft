/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:26:54 by elefonta          #+#    #+#             */
/*   Updated: 2023/12/01 12:27:48 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size_src;
	size_t	size_dst;

	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	i = 0;
	if (!size)
		return (size_src);
	if (size_dst >= size)
		return (size_src + size);
	while (src[i] && (size_dst + i < size - 1))
	{
		dst[size_dst + i] = src[i];
		i++;
	}
	dst[size_dst + i] = '\0';
	if (size_dst > size)
		return (size + size_src);
	else
		return (size_src + size_dst);
}
