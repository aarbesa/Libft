/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:07:48 by aabdyli           #+#    #+#             */
/*   Updated: 2022/11/22 12:07:57 by aabdyli          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nbr)
{
	int			i;
	int			neg;
	long int	nbre;

	i = 0;
	neg = 1;
	nbre = 0;
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == 32)
		i++;
	if (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			neg = -1;
		i++;
	}
	while (nbr[i] >= '0' && nbr[i] <= '9')
	{
		if (nbre != ((nbre * 10 + (nbr[i] - 48)) / 10))
			return ((int)((neg + 1) / 2 / -1));
		nbre = nbre * 10 + (nbr[i] - 48);
		i++;
	}
	return (nbre * neg);
}
