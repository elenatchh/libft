/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:07:47 by elefonta          #+#    #+#             */
/*   Updated: 2023/12/16 12:05:48 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*cpy;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	cpy = malloc(((i + j) + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		cpy[i + j] = s2[j];
		j++;
	}
	cpy[i + j] = '\0';
	return (cpy);
}
/*
#include <stdio.h>

int	main(void)
{
	char hello[] = "salut ";
	char everyone[] = "a tous";
	char* joined = ft_strjoin(hello, everyone);
	printf("trying to join '%s' and '%s'\n", hello, everyone);
	printf("joined strings = '%s'\n", joined);
}
*/