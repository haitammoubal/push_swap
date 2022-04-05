/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:23:09 by hmoubal           #+#    #+#             */
/*   Updated: 2022/04/04 16:47:49 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_big_sort(t_table *m)
{
	int		tab_len[m->a.size];
	int		tab_sub[m->a.size];
	t_int	var;

	var.i = 0;
	while (var.i < m->a.size)
	{
		tab_len[var.i] = 1;
		(var.i)++;
	}
	var.i = 1;
	while (var.i < m->a.size)
	{
		var.j = 0;
		while (var.j < var.i)
		{
			if (m->a.tab[var.j] < m->a.tab[var.i])
			{
				var.k = tab_len[var.j] + 1;
				if (var.k >= tab_len[var.i])
				{
					tab_len[var.i] = var.k;
					tab_sub[var.i] = var.j;
				}
			}
			(var.j)++;
		}
		(var.i)++;
	}
}
