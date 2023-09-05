/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:18:07 by aabdyli           #+#    #+#             */
/*   Updated: 2022/11/22 12:18:08 by aabdyli          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_chain;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	new_chain = (char *) \
	malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (new_chain == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		new_chain[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new_chain[i + j] = s2[j];
		j++;
	}
	new_chain[i + j] = '\0';
	return (new_chain);
}
