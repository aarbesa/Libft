/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:00:26 by aabdyli           #+#    #+#             */
/*   Updated: 2022/11/22 14:00:28 by aabdyli          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_chain;
	size_t	i_old;
	size_t	j_new;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	new_chain = (char *)malloc((len + 1));
	if (!new_chain)
		return (0);
	i_old = -1;
	j_new = 0;
	while (s[++i_old])
	{
		if (i_old >= start && j_new < len)
		{
			new_chain[j_new] = s[i_old];
			j_new++;
		}
	}
	new_chain[j_new] = '\0';
	return (new_chain);
}
