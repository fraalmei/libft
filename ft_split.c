/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:09:54 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/20 10:52:23 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s != '\0')
	{
		if (*s == c)
			j = 0;
		else if (j == 0)
		{
			i++;
			j = 1;
		}
		s++;
	}
	return (i);
}

static size_t	ft_chrlen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	**ft_free_malloc(char **s, size_t i)
{
	while (i >= 0)
		free ((void *)s[i--]);
	free (s);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	size_t	l;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = -1;
	l = ft_words(s, c);
	str = (char **)malloc(sizeof(char *) * (l + 1));
	if (!str)
		return (NULL);
	while (++i < l)
	{
		while (*s == c)
			s++;
		j = ft_chrlen(s, c);
		str[i] = ft_substr(s, 0, j);
		if (!str[i])
			return (ft_free_malloc(str, i));
		s = (ft_strchr(s, (int)c));
	}
	str[i] = 0;
	return (str);
}
/*
	// utilizamos esta funcion para contar las palabras
	// en las que se van a dividir el string
static size_t	ft_words(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
		// recorremos el string
	while (*s != '\0')
	{
			// cada vez que tengamos una coincidencia
			// ponemos "j" a 0 para indicar cuando empieza una nueva palabra
		if (*s == c)
			j = 0;
			// si "j" esta a 0 y no hay concidencia
			// significa que se ha encontrado una palabra nueva
		else if (j == 0)
		{
				// sumamos 1 a "i"
			i++;
				// y ponemos "j" a 1 para que no vuelva a entrar
				// a menos que encuentre conincidencia
			j = 1;
		}
			// movemos el puntero
		s++;
	}
	return (i);
}

	// se calcula el numero de caracteres que hay hasta
	// la siguiente coincidencia de "c" sobre "s"
static size_t	ft_chrlen(const char *s, char c)
{
	size_t	i;

	i = 0;
		// mientras "s[i]" sea distinto de "c"
		// y no sea nulo, contamos
	while (s[i] != c && s[i])
		i++;
	return (i);
}

	// se llama a free para liberar la memoria reservada
	// tanto los strings secundarios como el string principal
static char	**ft_free_malloc(char **s, size_t i)
{
	while (i >= 0)
		free ((void *)s[i--]);
	free (s);
	return (NULL);
}

	// Reserva con malloc y devuelve un array de strings
	// obtenido al separar 's' con el caracter 'c' como delimitador
	// el array debe terminar con NULL
char	**ft_split(const char *s, char c)
{
	char	**str;
	size_t	l;
	size_t	i;
	size_t	j;

		// comprobamos que 's' existe
	if (!s)
		return (NULL);
	i = -1;
		// calculamos el numero de palabras dentro del string
	l = ft_words(s, c);
		// reservamos el string principal
	str = (char **)malloc(sizeof(char *) * (l + 1));
		// comprobamos que se ha reservado bien el espacio
	if (!str)
		return (NULL);
		// creamos strings un numero de veces
		// igual a l
	while (++i < l)
	{
			// cuando *s es igual que 'c' avanza el puntero
		while (*s == c)
			s++;
			// averiguammos cuanta es la distantica
			// hasta la siguiente equiivalencia
		j = ft_chrlen((const char *)s, c);
			// creamos el string
		str[i] = ft_substr(s, 0, j);
			// y comprobamos que se hcreado
		if (!str[i])
			return (ft_free_malloc(str, i));
			// cambiamos el puntero de 'c' a la posicion
			// de la siguiente equivalencia
		s = (ft_strchr(s, (int)c));
	}
		// asignamos al ultimo string un NULL
	str[i] = 0;
	return (str);
}
*/