/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:14:54 by elefonta          #+#    #+#             */
/*   Updated: 2023/11/10 13:23:22 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcpy(char *dest, char *src, unsigned int size)
{
    size_t i;

    i = 0;
    if (size <= 0)
        return (ft_strlen(src));
    while(src[i] && i <= size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(ft_strlen(src))
}
// #include <stdio.h>

// int main() {
//     char dest[20];
//     char src[] = "Bonjour, le monde !";
    
//     int result = ft_strlcpy(dest, src, sizeof(dest));

//     printf("Chaîne copiée : %s\n", dest);
//     printf("Longueur totale de la chaîne source : %d\n", result);

//     return 0;
// }
// le but de la fonction ft_strlcpy est de copier la 
// source dans la dest et renvoie la valeur de la longueur
//  de la dest 
