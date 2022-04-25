/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:59:46 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/12 15:39:35 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

	// enviar el caracted "c" al "fd" dado
void	ft_putchar_fd(char c, int fd)
{
	if (!c || !fd)
		return ;
	write (fd, &c, 1);
}

/*
	// enviar el caracted "c" al "fd" dado
void	ft_putchar_fd(char c, int fd)
{
		// write escribe el caracter "c" en "fd" en la ultima posicion disponible
	write (fd, &c, 1);
}
*/