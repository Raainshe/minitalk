/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:27:34 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/23 11:37:42 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Clears all elements from a linked list.
///
/// This function removes and frees all elements in the linked list, but does
/// not free the list's head pointer itself. After calling this function, the
/// list will be empty, and any memory allocated for the list's nodes will be
/// released.
///
/// @param lst A double pointer to the head of the linked list. The function
///            will modify the list by clearing all elements.
/// @param del A function pointer that will be used to delete the content of
///            each element in the list before freeing the node itself.
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
