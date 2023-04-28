/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxipeti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:41:52 by maxipeti          #+#    #+#             */
/*   Updated: 2023/02/15 15:10:20 by maxipeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*res1;
	const unsigned char	*res2;

	res1 = s1;
	res2 = s2;
	i = 0;
	while (i < n)
	{
		if (res2[i] != res1[i])
			return (res1[i] - res2[i]);
		i++;
	}
	return (0);
}
