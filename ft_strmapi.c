/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:18:58 by aabdyli           #+#    #+#             */
/*   Updated: 2022/11/22 12:19:00 by aabdyli          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_chain;
	int		i;

	if (!s)
		return (NULL);
	new_chain = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	i = 0;
	if (new_chain == NULL)
		return (NULL);
	while (s[i])
	{
		new_chain[i] = f(i, s[i]);
		i++;
	}
	new_chain[i] = '\0';
	return (new_chain);
}
