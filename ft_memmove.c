/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:00:25 by fraalmei          #+#    #+#             */
/*   Updated: 2022/08/10 15:29:13 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// se copia "n" caracteres de "src" a "dst"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;
	unsigned char		*ld;
	unsigned const char	*ls;

		// check if src and dst exits
	if (src == NULL && dst == NULL)
		return (NULL);
	d = dst;
	s = src;
		// if dst its bigger than src
	if (d < s)
		while (len--)
			*d++ = *s++;
		// if src its bigger or equal than dst
	else
	{
		ld = d + (len - 1);
		ls = s + (len - 1);
		while (len--)
			*ld-- = *ls--;
	}
	return (dst);
}
