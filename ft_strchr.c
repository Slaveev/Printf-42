/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dslaveev <dslaveev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:13:46 by dslaveev          #+#    #+#             */
/*   Updated: 2024/03/12 14:23:00 by dslaveev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/// @brief finds the first occurence of character in a string
/// @param str
/// @param character
/// @return the pointer to the location if found
char	*ft_strchr(const char *str, int character)
{
	char	c;

	c = (char) character;
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (*str == c)
	{
		return ((char *)str);
	}
	return (NULL);
}
