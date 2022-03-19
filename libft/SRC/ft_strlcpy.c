/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitam <haitam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:19:44 by hmoubal           #+#    #+#             */
/*   Updated: 2022/03/19 22:29:11 by haitam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcpy(char *dest,	const char *src,	size_t size)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	while (src[i] != '\0')
		i++;
	if (size != 0)
	{
		while (src[a] != '\0' && a < size - 1)
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (i);
}
