/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:41:25 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/12 15:32:54 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// escribe el numero "n" en "fd"
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10;
	}
	if (n < 10)
		ft_putchar_fd('0' + n, fd);
}

/*
	// escribe el numero "n" en "fd"
void	ft_putnbr_fd(int n, int fd)
{
		// comprobamos si "n" coincide numero minimo de int
	if (n == -2147483648)
	{
			// imprimimos el signo y el numero 2
			// para no tener problemas con el numero maximo de int
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
			// e igualamos
		n = 147483648;
	}
		// comprobamos si "n" tiene signo
	if (n < 0)
	{
			// quitamos el signo
		ft_putchar_fd('-', fd);
			y positivizamos "n"
		n = -n;
	}
		// mientras "n" sea mayor que 10
	if (n >= 10)
	{
			// llamamos a putnbr hasta que "n" sea menos que 10
			// tomando el resto de "n" para e siguiente if
		ft_putnbr_fd(n / 10, fd);
		n = n % 10;
	}
	if (n < 10)
			// imprimiendo el numero restante
		ft_putchar_fd('0' + n, fd);
}
*/