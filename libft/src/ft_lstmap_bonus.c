/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:55:02 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/23 13:35:32 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Applies a function to each element of a linked list and creates
///        a new list with the results.
///
/// This function iterates over the linked list, applying the given function
/// `f` to the content of each element. It creates a new list where each element
/// is the result of applying `f` to the corresponding element in the
/// original list.
///
/// @param lst A pointer to the head of the linked list. The function will
///            iterate through all elements of the list.
/// @param f A function pointer that will be applied to each element's content.
/// @param del A function pointer used to delete the content of an element if
///            there is an error during the list creation.
///
/// @return A new linked list with the results of applying `f` to each element,
///         or NULL if the list creation fails.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*next;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		next = ft_lstnew(content);
		if (!next)
		{
			if (content)
				del(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, next);
		lst = lst->next;
	}
	return (new);
}
