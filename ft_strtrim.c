/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:19:53 by aabdyli           #+#    #+#             */
/*   Updated: 2022/11/22 12:19:55 by aabdyli          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char s, char *c)
{
	size_t		i;

	i = 0;
	while (c[i])
	{
		if (c[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*newstr;

	if (s1 == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_check(s1[start], (char *)set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_check(s1[end - 1], (char *)set))
		end--;
	newstr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (start < end)
		newstr[i++] = s1[start++];
		newstr[i] = '\0';
	return (newstr);
}
