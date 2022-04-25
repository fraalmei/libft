/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:21:13 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 09:53:09 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

	// convierte un int a string char
char	*ft_itoa(int n)
{
	char		c[12];
	int			j;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_bzero(c, 12);
	j = ft_intlen(n) - 1;
	if (n < 0)
	{
		c[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		c[j--] = '0' + (n % 10);
		n = n / 10;
	}
	return (ft_strdup(c));
}

/*

	version sin leaks
char	*ft_itoa(int n)
{
	char		c[12];
	int			j;

		// comprobamos si el "n" es 0
	if (n == 0)
		return (ft_strdup("0"));
		// comprobamos si el "n" es el minimo numero de int
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_bzero(c, 12);
	j = ft_intlen(n) - 1;
		// comprobamos el signo
	if (n < 0)
	{
		c[0] = '-';
		n = -n;
	}
		// rellenamos el espacio reservado con los restos
		// de n / 10 y haciendo lo propio con el propio "n"
	while (n > 0)
	{
		c[j--] = '0' + (n % 10);
		n = n / 10;
	}
	return (ft_strdup(c));
}

	version con leaks
char	*ft_itoa(int n)
{
	char			*c;
	char			i;

	i = 1;
		// comprobamos si el "n" es 0
	if (n == 0)
			// si lo es devolvemos
		return (ft_strdup("0"));
		// comprobamos si el "n" es el minimo numero de int
	if (n == -2147483648)
			// si lo es lo devolvemos directamente
		return (ft_strdup("-2147483648"));
		// reservamos memoria calculando con "ft_intlen" los espacios de "n"
	c = (char *)ft_calloc(sizeof(char), ft_intlen(n) + 1);
		// comprobamos que ha salido bien la reserva
	if (c == NULL)
		exit (0);
		// comprobamos el signo
	if (n < 0)
	{
			// si es negativo guardamos un -1
		i = -1;
			/7 y ponemos a positivo "n"
		n = -n;
	}
		// mientras "n" no sea 0
	while (n != 0)
	{
			// rellenamos el espacio reservado con los restos
			// de n / 10 y haciendo lo propio con el propio "n"
		c = ft_memset(c, '0' + (n % 10), 1);
		n = n / 10;
			// movemos el puntero
		c--;
	}
		// comprobamos la variable del signo
	if (i < 0)
			// si es negativa añadimos el signo
		ft_memset(--c, 45, 1);
		// y devolvemos "c" moviendo el puntero a la posicion correcta
	return (++c);
}

size_t	ft_intlen(int n)
{
	size_t	i;

	i = 0;
		// comprobamos signo
	if (n < 0)
		i++;
		// dividimos entre 10 el numero
		// como el resto no perdura
		// la cantidad de divisiones es el largo del numero
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}*/
