/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:17:15 by aabdyli           #+#    #+#             */
/*   Updated: 2022/11/22 12:17:20 by aabdyli          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*a;
	int		i;

	i = 0;
	a = (char *)s;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return (&a[i]);
		}
		i++;
	}
	if ((char)c == '\0')
		return (&a[i]);
	return (NULL);
}
