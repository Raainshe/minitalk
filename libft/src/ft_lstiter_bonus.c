/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:41:59 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/23 11:39:43 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Iterates over a linked list and applies a function to each element.
///
/// This function traverses the list from the head to the last element,
/// applying the provided function `f` to the content of each node.
///
/// @param lst A pointer to the head of the linked list. The function will
///            iterate through all elements of the list.
/// @param f A function pointer to the function that will be applied to the
///          content of each element in the list.
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
