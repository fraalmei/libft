/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:02:14 by fraalmei          #+#    #+#             */
/*   Updated: 2022/03/31 12:13:36 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// escribe un string "s" en "fd"
void	ft_putstr_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}

/*
	// escribe un string "s" en "fd"
void	ft_putstr_fd(char *s, int fd)
{
		// comprobamos si existe "s" y "fd"
	if (!s || !fd)
		return ;
		// mientras "s"
	while (*s)
			// hacemos un putchar por cada una de las posiciones a "fd"
		ft_putchar_fd(*s++, fd);
}*/
