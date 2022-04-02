/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:05:36 by haitam            #+#    #+#             */
/*   Updated: 2022/04/01 20:53:32 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_sorted(t_table *m)
{
	t_int var;

	var.i = 0;
	while (var.i < m->a.size - 1)
	{
		if (m->a.tab[var.i] > m->a.tab[(var.i) + 1])
			return (0);
		(var.i)++;
	}
	return (1);
}
