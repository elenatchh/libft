/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:14:54 by elefonta          #+#    #+#             */
/*   Updated: 2023/12/16 12:07:31 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	size_t	i;

	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#define BUFFER_SIZE 64

int	main(void)
{
	char	dest[BUFFER_SIZE];

	char src[] = "hello";
	printf("length of string we tried to copy : %li\n", ft_strlcpy(dest, src,
			BUFFER_SIZE));
	printf("destination : %s\n", dest);
}
*/