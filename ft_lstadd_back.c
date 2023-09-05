/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:12:05 by aabdyli           #+#    #+#             */
/*   Updated: 2022/11/22 12:12:08 by aabdyli          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*liste;

	if (!lst)
		return ;
	if (*lst)
	{
		liste = ft_lstlast(*lst);
		liste->next = new;
	}
	else
		*lst = new;
}
