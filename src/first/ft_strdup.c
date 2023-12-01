/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:50:52 by elefonta          #+#    #+#             */
/*   Updated: 2023/12/01 12:27:39 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *ptr, int value, size_t num);

char	*ft_strdup(char const *str)
{
	int		i;
	char	*ret;

	i = 0;
	if (!str)
		return (NULL);
	ret = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!ret)
		return (NULL);
	ft_memset(ret, 0, ft_strlen(str) + 1);
	while (str[i])
	{
		ret[i] = str[i];
		i++;
	}
	return (ret);
}
