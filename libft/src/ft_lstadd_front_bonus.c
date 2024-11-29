/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:21:44 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/23 11:28:58 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Adds a new element to the beginning of a linked list.
///
/// This function takes a pointer to the head of a linked list and a new
/// element. It inserts the new element at the beginning of the list. If the
/// list is empty, the new element becomes the head of the list.
///
/// @param lst A double pointer to the head of the linked list. This allows
///            modification of the list's head.
/// @param new A pointer to the new element to be added to the list. The
///                 new element's `next` pointer will be updated during this
///                 operation.
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
