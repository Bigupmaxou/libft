/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxipeti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:05:23 by maxipeti          #+#    #+#             */
/*   Updated: 2023/02/27 17:50:39 by maxipeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalsize;
	void	*ptr;
	size_t	i;

	if (size == 0 || nmemb == 0)
		return (malloc (0));
	totalsize = (nmemb * size);
	if (nmemb * size / size != nmemb)
		return (NULL);
	ptr = malloc(totalsize);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < totalsize)
	{
		*((char *)ptr + i) = 0;
		i++;
	}
	return (ptr);
}
