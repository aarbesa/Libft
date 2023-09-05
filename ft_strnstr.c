/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:19:32 by aabdyli           #+#    #+#             */
/*   Updated: 2022/11/22 12:19:34 by aabdyli          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;
	size_t		k;
	char		*ss1;

	ss1 = (char *)s1;
	if (s2[0] == '\0')
		return (ss1);
	i = 0;
	j = 0;
	k = 0;
	while (i < n && s1[i])
	{
		k = i;
		while (s1[i] == s2[j] && s2[j] && i < n)
		{
			j++;
			i++;
		}
		if (s2[j] == '\0')
			return (&ss1[k]);
		i = k + 1;
		j = 0;
	}
	return (NULL);
}
