/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:40:27 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/22 12:53:47 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Returns the last element of a linked list.
///
/// This function traverses the list from the head to the last element and
/// returns a pointer to the last node. If the list is empty, it returns NULL.
///
/// @param lst A pointer to the head of the linked list. The function will
///            iterate through the list to find the last element.
///
/// @return A pointer to the last element of the list, or NULL if the list
///         is empty.
t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
// if(lst == NULL || lst->next == NULL)
//     return (lst);
// return (ft_lstlast(lst->next));