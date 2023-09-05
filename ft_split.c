/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:17:01 by aabdyli           #+#    #+#             */
/*   Updated: 2022/11/22 12:17:02 by aabdyli          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbsep(char *str, char c)
{
	int		i;
	int		nb_word;

	i = 0;
	nb_word = 0;
	while (str[i])
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		if (str[i] != '\0')
			nb_word++;
		while (str[i] && c != str[i])
			i++;
	}
	return (nb_word);
}

static int	ft_lenword(char *str, char sep)
{
	int		i;

	i = 0;
	while (str[i] && sep != str[i])
		i++;
	return (i);
}

static char	**ft_freetab(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	*ft_tab(char *tab, char set)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	size = ft_lenword(tab, set);
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = tab[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**newstr;
	int		i;
	int		j;
	int		nb_lines;

	nb_lines = ft_nbsep((char *)s, c);
	newstr = malloc(sizeof(char *) * (nb_lines + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < nb_lines)
	{
		while (s[i] != '\0' && c == s[i])
			i++;
		newstr[j] = ft_tab((char *)&s[i], c);
		if (!newstr[j])
			return (ft_freetab(newstr));
		j++;
		while (s[i] && c != s[i])
			i++;
	}
	newstr[nb_lines] = NULL;
	return (newstr);
}
