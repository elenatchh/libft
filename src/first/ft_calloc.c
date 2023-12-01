/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:06:28 by elefonta          #+#    #+#             */
/*   Updated: 2023/12/01 15:08:12 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	n;

	n = count * size;
	if (n && (size != n / count))
		return (NULL);
	ptr = malloc(n);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n);
	return (ptr);
}
