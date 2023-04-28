/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxipeti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:09:21 by maxipeti          #+#    #+#             */
/*   Updated: 2023/02/24 13:26:50 by maxipeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	longueur(int n)
{
	size_t	i;

	i = 0;
	if (n < 0 || n == 0)
		i++;
	while (n != 0)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*dst;
	long	nb;

	nb = n;
	len = longueur(nb);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst == 0)
		return (0);
	if (nb == 0)
		dst[0] = '0';
	if (nb < 0)
	{
		nb = nb * -1;
		dst[0] = '-';
	}
	dst[len] = '\0';
	while (nb != 0)
	{
		dst[len - 1] = nb % 10 + 48;
		nb = nb / 10;
		len--;
	}
	return (dst);
}
