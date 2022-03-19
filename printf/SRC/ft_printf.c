/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitam <haitam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:27:28 by hmoubal           #+#    #+#             */
/*   Updated: 2022/03/19 22:35:38 by haitam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
	{
		*count += write(1, "(null)", 6);
		return ;
	}
	while (str[i])
	{
		*count += write(1, &str[i], 1);
		i++;
	}
	return ;
}

void	ft_sep(va_list hub, char **str, int *count)
{
	if (*(*str) == 'c' || *(*str) == 'd' || *(*str) == 'i')
		ft_detect1(hub, *str, count);
	else if (*(*str) == 's' || *(*str) == 'u' || *(*str) == '%')
		ft_detect2(hub, *str, count);
	else if (*(*str) == 'p' || *(*str) == 'x' || *(*str) == 'X')
		ft_detect3(hub, *str, count);
}

int	ft_printf(const char *str, ...)
{
	va_list	hub;
	int		count;

	count = 0;
	va_start(hub, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_sep(hub, (char **)&str, &count);
		}
		else
			count += write(1, str, 1);
		str++;
	}
	va_end(hub);
	return (count);
}
