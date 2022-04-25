/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:40:48 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/04 18:46:09 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	// convierte un char string a int
int	ft_atoi(const char *str)
{
	int	i;
	int	k;
	int	l;

	i = 0;
	l = 1;
	k = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			l = -1;
	while (str[i] >= '0' && str[i] <= '9')
		k = (str[i++] - '0') + (k * 10);
	return (k * l);
}

/*
	// convierte un char string a int
int	ft_atoi(const char *str)
{
	int	i;
	int	k;
	int	l;

	i = 0;
	l = 1;
	k = 0;
		// comprobamos si hjay espacios al principio
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
		// comprobamos si hay signo
	if (str[i] == '-' || str[i] == '+')
			// si el signo es negativo guardamos un -1
		if (str[i++] == '-')
			l = -1;
		// si los elementos siguientes son numeros
	while (str[i] >= '0' && str[i] <= '9')
			// vamos sumando a k el elemento visto
			// y multiplicamos por 10 el numero ya guardado en k
			// asi a numero nuevo le sumamos a los anteriores
		k = (str[i++] - '0') + (k * 10);
		// devolvemos el "k" y lo multiplicamos por lo guardado en "l"
	return (k * l);
}*/
