/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:07:53 by elefonta          #+#    #+#             */
/*   Updated: 2023/11/20 10:12:56 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define DEL 127

int	ft_isprint(int c)
{
	return (c >= ' ' && c < DEL);
}
