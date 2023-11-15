/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:42:37 by elefonta          #+#    #+#             */
/*   Updated: 2023/11/15 11:12:39 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int value, size_t num)
{
	char	*str;
	size_t	i;

	str = (char *)ptr;
	i = 0;

	while (i < num)
	{
		str[i] = value;
		i++;
	}
}
