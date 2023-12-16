/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elefonta <elefonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:25:33 by elefonta          #+#    #+#             */
/*   Updated: 2023/12/07 15:28:48 by elefonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lenint(long int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_neutre(void)
{
	char	*str;

	str = malloc (2 * sizeof (char));
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nb;
	int			i;

	nb = n;
	if (nb == 0)
		return (ft_neutre());
	i = 0;
	if (nb < 0)
	{
		i += 1;
		nb *= -1;
	}
	i += ft_lenint(nb) - 1;
	str = malloc (sizeof (char) * (i + 2));
	if (!str)
		return (NULL);
	str[i + 1] = '\0';
	str[0] = '-';
	while (nb > 0)
	{
		str[i--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}

/*int main()
{
	int array = -65612;

	printf("%s", ft_itoa(array));
}*/