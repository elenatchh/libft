/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:13:58 by elefonta          #+#    #+#             */
/*   Updated: 2023/11/22 16:10:41 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    while (i < n && s1[i] != '\0')
    {
        j = 0;
        while (i + j < n && s1[i + j] == s2[j] && s2[j] != '\0')
            j++;
        if (s2[j] == '\0')
            return ((char *)s1 + i);
        i++;
    }
    return (NULL);
}

int main(void)
{
    const char *chainePrincipale = "Bonjour, comment ça va ?";
    const char *sousChaine = "comment";

    char *resultat = ft_strnstr(chainePrincipale, sousChaine, 30);

    if (resultat != NULL)
    {
        printf("Sous-chaîne trouvée à la position : %ld\n", (long)(resultat - chainePrincipale));
        printf("Sous-chaîne : %s\n", resultat);
    }
    else
    {
        printf("Sous-chaîne non trouvée.\n");
    }

    return 0;
}


//    La fonction strcasestr() est similaire à strstr(), mais elle ignore la casse
//    des deux chaînes.

//    La fonction strcasestr_l() fait la même chose que strcasestr(), mais elle prend
//    une locale explicite plutôt que d'utiliser la locale actuelle.

//    La fonction strnstr() localise la première occurrence de la chaîne termi-
//    née par NULL petite dans la chaîne grande, où au plus len caractères sont
//    recherchés. Les caractères qui apparaissent après un caractère `\0' ne sont
//    pas recherchés. Étant donné que la fonction strnstr() est spécifique à FreeBSD,
//    elle ne devrait être utilisée que lorsque la portabilité n'est pas une préoccupation.
// DESCRIPTION
// La fonction strnstr() localise la première occurrence de la chaîne terminée par NULL 
// petite dans la chaîne grande, où au plus len caractères sont recherchés. Les caractères 
// qui apparaissent après un caractère ‘\0’ ne sont pas recherchés. Étant donné que la fonction
//  strnstr() est une API spécifique à FreeBSD, elle ne devrait être utilisée que lorsque la
//   portabilité n'est pas une préoccupation.

// VALEURS DE RETOUR
// Si petite est une chaîne vide, grande est retournée ; si petite n'apparaît nulle part
// dans grande, NULL est retourné ; sinon, un pointeur vers le premier caractère de la
// première occurrence de petite est retourné.