/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitam <haitam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:27:38 by hmoubal           #+#    #+#             */
/*   Updated: 2022/03/19 15:03:01 by haitam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<unistd.h>
# include<stdlib.h>
# include<stdarg.h>
# include <stdio.h>
# include <limits.h>
# include<string.h>

int		ft_printf(const char *str, ...);
void	cal(unsigned long n, unsigned long nb, char *base, int *count);
void	cal_int(long int n, long int nb, char *base, int *count);
void	ft_putstr(char *str, int *count);
void	ft_detect1(va_list hub, char *str, int *count);
void	ft_detect2(va_list hub, char *str, int *count);
void	ft_detect3(va_list hub, char *str, int *count);
void	ft_sep(va_list hub, char **str, int *count);

#endif
