/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:41:06 by fraalmei          #+#    #+#             */
/*   Updated: 2022/08/10 13:52:53 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// locate the first coincidence of 'c' in "s" for "n" characters
	// returning a pointer to that position
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*t;

	t = s;
		// while n its mora than zero
	while (n--)
			// compare the current char of "s" with 'c'
		if (*t++ == (char)c)
				// if its equal return the pointer to that position
			return ((char *)--t);
	return (NULL);
}
