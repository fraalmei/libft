/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:27:38 by fraalmei          #+#    #+#             */
/*   Updated: 2022/08/10 13:31:43 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// calloc allocate memmory for any tipe of data
void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

		// allocate the required space with malloc
	s = (void *)malloc(count * size);
		// if the allocation fails return a NULL
	if (!s)
		return (NULL);
		// fill 's' with '\0' with bzero
	ft_bzero(s, (count * size));
	return (s);
}
