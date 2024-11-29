/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:13:49 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 13:22:28 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Applies a function to each character of a string with its index.
///
/// This function iterates over the string `s`, applying the function `f` to
/// each character. The function also passes the index of each character as
/// an argument, allowing for index-aware transformations.
///
/// @param s The string to iterate over.
/// @param f The function to apply to each character of the string. It takes
///          two arguments: the character and its index in the string.
///
/// @return A new string with the results of applying `f` to each character,
///         or NULL if memory allocation fails.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
