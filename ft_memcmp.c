/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:45:43 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 11:20:35 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// se comparan "n" caracteres de dos strings 
	// devolviendo si hay diferencia entre ellos o son iguales
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*d;
	const unsigned char		*s;

	if (0 == n || s1 == s2)
		return (0);
	d = s1;
	s = s2;
	while (n--)
		if (*d++ != *s++)
			return (*--d - *--s);
	return (0);
}
/*
	// se comparan "n" caracteres de dos strings 
	// devolviendo si hay diferencia entre ellos o son iguales
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*d;
	const unsigned char		*s;

	if (0 == n || s1 == s2)
		return (0);
	d = s1;
	s = s2;
	while (n--)
	{
		if (*d != *s)
			return (*d - *s);
		d++;
		s++;
	}
	return (0);
}
*/