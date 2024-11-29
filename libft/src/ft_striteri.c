/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:25:26 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 13:37:20 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Applies a function to each character of a string, with its index.
///
/// This function iterates over the string `s`, applying the function `f` to
/// each character. The function also passes the index of each character as
/// an argument, allowing for index-aware processing.
///
/// @param s The string to iterate over.
/// @param f The function to apply to each character of the string. It takes
///          two arguments: the character and its index in the string.
///
/// @return None.
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
