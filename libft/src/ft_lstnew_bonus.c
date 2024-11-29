/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:11:36 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/23 11:51:27 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Creates a new element for a linked list.
///
/// This function allocates memory for a new list element and initializes
/// its content to the provided value. The `next` pointer of the new element
/// is set to NULL.
///
/// @param content A pointer to the content to be stored in the new element.
///                The function does not copy the content, only stores the
///                pointer.
///
/// @return A pointer to the newly created element, or NULL if memory
///         allocation fails.
t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}
