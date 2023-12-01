/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:45:19 by elefonta          #+#    #+#             */
/*   Updated: 2023/12/01 12:30:09 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	ft_nettoyage(char **tab)
{
	int	i;

	if (!tab)
		return ;
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

size_t	ft_compte_mots(char const *s, char c)
{
	int 	i;
	size_t	ret;

	i = 0;
	ret = 0;
	if (!s)
		return (ret);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			ret++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (ret);
}

char	*ft_coupe_mots(char *str, char c)
{
	static char *buffer;
	char 		*ret;

	if (str)
		buffer = str;
	while (*buffer && *buffer == c)
		buffer++;
	ret = buffer;
	while (*buffer)
	{
		if (*buffer == c)
		{
			*buffer = '\0';
			buffer++;
			return (ret);
		}
		buffer += (*buffer != '\0');
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	*buffer;
	char	*mot;
	char	**ret;

	if (!s)
		return (NULL);
	buffer = ft_strdup(s);
	if (!buffer)
		return (NULL);
	ret = malloc(sizeof(char *) * (ft_compte_mots(s, c) + 1));
	if (!ret)
		return (free(buffer), NULL);
	ft_memset(ret, 0, sizeof(char *) + (ft_compte_mots(s, c) + 1));
	mot = ft_coupe_mots(buffer, c);
	i = 0;
	while (mot)
	{
		ret[i] = ft_strdup(mot);
		if (!ret)
			return (ft_nettoyage(ret), free(buffer), NULL);
		mot = ft_coupe_mots(NULL, c);
		i++;
	}
	return (free(buffer), ret);
}

int	main(int ac, char **av)
{
	char	**tab;
	int		i;

	if (ac == 2)
	{
		printf("%s \n", av[1]);
		tab = ft_split(av[1], ' ');
		if (!tab)
			return (1);
		i = 0;
		while (tab[i])
		{
			printf("%s\n", tab[i]);
			i++;
		}
		ft_nettoyage(tab);
	}
	return (0);
}