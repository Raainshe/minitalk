/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:51:07 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/23 11:33:17 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Adds a new element to the end of a linked list.
///
/// This function takes a pointer to the head of a linked list and a new
/// element. It appends the new element to the end of the list. If the list
/// is empty, the new element becomes the head of the list.
///
/// @param lst A double pointer to the head of the linked list. This allows
///            modification of the list's head when it's initially NULL.
/// @param new_elem A pointer to the new element to be added to the list. The
///                 new element's `next` pointer must be set to NULL before
///                 calling this function.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	if (last != NULL)
		last->next = new;
}
