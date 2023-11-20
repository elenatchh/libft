/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:13:58 by elefonta          #+#    #+#             */
/*   Updated: 2023/11/20 14:40:50 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	a;
    int b;

    a = 0;
    b = 0;
    while (big[b] && little[a])
    {
        if (little[a + b] == big[b])
        b++;
        else
        {
            a++;
            b = 0;
        }
    }
    if (big[b] == '\0')
        return (&little[a]);
    else
        return (0);
}
