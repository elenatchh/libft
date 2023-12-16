/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:04:39 by elefonta          #+#    #+#             */
/*   Updated: 2023/12/16 11:56:45 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			len;
	char			*trimmed;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]) && len != start)
		len--;
	len -= start;
	trimmed = ft_substr(s1, start, len + 1);
	if (!trimmed)
		return (NULL);
	return (trimmed);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*trimmed;

	//char hello[] = "      hello \tsalut  ca va    \t";
	char hello[] = "   xxx   xxx";
	trimmed = ft_strtrim(hello, " x");
	printf("trying to trim '%s' and remove '%s' characters\n", hello,
		" \t\n");
	printf("trimmed : '%s'\n", trimmed);
	free(trimmed);
}
*/