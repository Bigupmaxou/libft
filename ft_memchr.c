/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxipeti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:31:51 by maxipeti          #+#    #+#             */
/*   Updated: 2023/02/27 17:09:46 by maxipeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*res;

	res = (const char *)s;
	i = 0;
	while (i < n)
	{
		if ((res[i] == (char)c))
		{
			return ((void *)res + i);
		}
		i++;
	}	
	return (NULL);
}
