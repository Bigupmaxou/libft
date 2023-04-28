/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxipeti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:31:45 by maxipeti          #+#    #+#             */
/*   Updated: 2023/03/02 13:35:32 by maxipeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*last;

	i = 0;
	if (!lst)
		return (0);
	last = lst;
	while (last)
	{
		i++;
		last = last->next;
	}
	return (i);
}
