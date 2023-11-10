/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:26:54 by elefonta          #+#    #+#             */
/*   Updated: 2023/11/10 13:37:13 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t    ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t    i;
    size_t    size_src;
    size_t    size_dst;

    size_src = ft_strlen(src);
    size_dst = ft_strlen(dst);
    if (!size)
        return (size_src);
    if (size_dst >= size)
        return (size_src + size);
    i = 0;
    while (src[i] && (size_dst + i < size - 1))
    {
        dst[size_dst + i] = src[i];
        i++;
    }
    dst[size_dst + i] = '\0';
    if (size_dst > size)
        return (size + size_src);
    else
        return (size_src + size_dst);
}