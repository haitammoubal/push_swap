/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitam <haitam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:05:36 by haitam            #+#    #+#             */
/*   Updated: 2022/03/31 00:34:00 by haitam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_check_sorted(t_table *m, t_int var)
{
	var.i = 0;
	while (var.i < m->a.size - 1)
	{
		if (m->a.tab[var.i] > m->a.tab[(var.i) + 1])
			break ;
		(var.i)++;
	}
	if (var.i == m->a.size)
	{
		free(m->a.tab);
		exit(0);
	}
}
