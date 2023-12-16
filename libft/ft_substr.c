/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:40:45 by elefonta          #+#    #+#             */
/*   Updated: 2023/12/07 14:54:58 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = malloc(1 * sizeof(char));
		if (!substr)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	if (len > s_len)
		len = s_len;
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc(1 + len * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, (char *) s + start, len + 1);
	return (substr);
}

/*
#include <stdio.h>

int	main(void)
{
	unsigned int	start;
	size_t			len;
	char			*substr;

	start = 3;
	len = 4;
	char test[] = "012345678";
	substr = ft_substr(test, start, len);
	printf("trying to create a substring from ** %s ** starting at index %i\n",
		test, start);
	printf("of size %lu\n", len);
	printf("the substring is : %s\n", substr);
}
*/