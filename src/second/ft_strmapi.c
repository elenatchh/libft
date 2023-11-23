/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:49:30 by elefonta          #+#    #+#             */
/*   Updated: 2023/11/22 18:01:14 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int	i;
	size_t			len;
	char			*ret;
	
	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	ret = malloc(sizeof(char) * len);
	if (!ret)
		return (NULL);
	ft_memset(ret, '\0', len);
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	return (ret);
}