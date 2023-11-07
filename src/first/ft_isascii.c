/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:11:48 by elefonta          #+#    #+#             */
/*   Updated: 2023/11/07 12:11:56 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isascii(int c)
{
    return (c >= 0 && c  < 128);
}