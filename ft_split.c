/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxipeti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:06:30 by maxipeti          #+#    #+#             */
/*   Updated: 2023/02/28 12:28:50 by maxipeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_of_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s || !c)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == 0 || s[i + 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**result;

	result = (char **)malloc(sizeof (char *) * (count_of_word(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (i < count_of_word(s, c) && s[j] != '\0')
	{
		while (s[j] == c)
			j++;
		k = j;
		while (s[j] != c && s[j])
			j++;
		result[i] = ft_substr(s, k, j - k);
		i++;
	}
	result[i] = NULL;
	return (result);
}
