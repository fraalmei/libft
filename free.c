/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:27:26 by fraalmei          #+#    #+#             */
/*   Updated: 2023/04/21 13:52:42 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	free_str(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free (s[i]);
		i++;
	}
	free (s);
	return (0);
}

int	free_str_str(char ***s)
{
	int		i;
	int		j;
	char	**swap;

	i = 0;
	while (s[i])
	{
		j = 0;
		swap = s[i];
		while (swap[j])
			free (swap[j++]);
		free (swap);
		i++;
	}
	free (s);
	return (0);
}
