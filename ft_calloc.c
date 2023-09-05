/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:08:38 by aabdyli           #+#    #+#             */
/*   Updated: 2022/11/22 12:08:42 by aabdyli          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*new_chain;

	if (nmemb == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	new_chain = (char *)malloc(nmemb * size);
	if (!new_chain)
		return (NULL);
	ft_bzero(new_chain, nmemb * size);
	return (new_chain);
}
