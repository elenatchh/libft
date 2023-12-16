/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:38:12 by elefonta          #+#    #+#             */
/*   Updated: 2023/12/16 12:04:27 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (s[i] == (unsigned char)c)
	{
		return ((char *)s + i);
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "hello world";
	printf("%s\n", ft_strchar(str, 'w'));
}
*/