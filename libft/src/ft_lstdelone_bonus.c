/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:59:36 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/23 11:39:36 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Deletes a single element from a linked list.
///
/// This function removes the specified element from the list and frees its
/// memory, including the memory allocated for its content. The `next` pointer
/// of the previous element (if any) will not be updated.
///
/// @param lst A pointer to the element to be deleted. The element's memory
///            will be freed.
/// @param del A function pointer that will be used to delete the content of
///            the element before freeing the node itself.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
