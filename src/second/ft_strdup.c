/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:50:52 by elefonta          #+#    #+#             */
/*   Updated: 2023/11/23 14:47:30 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdlib.h"

int	ft_strlen(char const *str);
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