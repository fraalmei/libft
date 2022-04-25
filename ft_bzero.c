/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:06:44 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 10:56:08 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/*bzero llama memset para llenar "i" posiciones de "c"
	con '\0'*/
void	ft_bzero(void *c, size_t i)
{
	ft_memset(c, '\0', i);
}
