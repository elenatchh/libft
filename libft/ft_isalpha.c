/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:11:37 by elefonta          #+#    #+#             */
/*   Updated: 2023/12/16 11:58:06 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	for (int i = 0; i < 127; i++)
	{
		if (ft_isalpha(i) == isalpha(i))
			printf("OK\n");
		else
			printf("NOT OK\n char = %c\n ft_isalpha tells %i\n but isalpha tells
				%i\n", i, ft_isalpha(i), isalpha(i));
	}
}
*/