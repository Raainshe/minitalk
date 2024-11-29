/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:28:32 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/23 13:41:09 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Returns the size of a linked list.
///
/// This function traverses the linked list from the head to the last element
/// and counts the number of elements in the list.
///
/// @param lst A pointer to the head of the linked list. The function will
///            iterate through the list to count the number of elements.
///
/// @return The number of elements in the linked list.
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
