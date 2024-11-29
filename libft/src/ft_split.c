/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:24:18 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/22 11:42:16 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	free_split(char **split, size_t s_countpos)
{
	size_t	i;

	i = 0;
	while (i < s_countpos)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}

size_t	num_strings(char *str, char c)
{
	size_t	i;
	size_t	out_str;
	size_t	s_count;

	i = 0;
	out_str = 1;
	s_count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && out_str == 1)
		{
			out_str = 0;
			s_count++;
		}
		else if (str[i] == c)
			out_str = 1;
		i++;
	}
	return (s_count);
}

char	*split_str(char *str, size_t start, size_t end)
{
	char	*data;
	int		i;

	data = (char *)malloc(end - start + 1);
	if (!data)
		return (NULL);
	i = 0;
	while (start < end)
	{
		data[i] = str[start];
		start++;
		i++;
	}
	data[i] = '\0';
	return (data);
}

int	split_helper(const char *s, char c, char **split)
{
	size_t	i;
	size_t	start;
	size_t	s_countpos;

	i = 0;
	s_countpos = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			split[s_countpos] = split_str((char *)s, start, i);
			if (!split[s_countpos])
				return (free_split(split, s_countpos));
			s_countpos++;
		}
		else
			i++;
	}
	split[s_countpos] = NULL;
	return (1);
}

/// @brief Splits a string into an array of substrings.
///
/// This function splits the string `s` into an array of substrings using
/// the delimiter `c`. Each substring is stored in an array, and the array
/// is terminated by a NULL pointer.
///
/// @param s The string to split.
/// @param c The delimiter character used to split the string.
///
/// @return An array of substrings. If memory allocation fails or the input
///         string is NULL, it returns NULL.
char	**ft_split(const char *s, char c)
{
	size_t	s_count;
	char	**split;

	s_count = num_strings((char *)s, c);
	split = (char **)malloc((s_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	if (!split_helper(s, c, split))
		return (NULL);
	return (split);
}
