/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:23:09 by hmoubal           #+#    #+#             */
/*   Updated: 2022/04/14 06:41:35 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_sorted_tab(int *tab, int size)
{
	t_int	var;

	var.i = 0;
	while (var.i < size - 1)
	{
		if (tab[var.i] > tab[(var.i) + 1])
			return (0);
		(var.i)++;
	}
	return (1);
}

void	ft_sort(int *tab, int size)
{
	t_int	var;

	while (ft_check_sorted_tab(tab, size) != 1)
	{
		var.i = 0;
		while (var.i < size - 1)
		{
			if (tab[var.i] > tab[var.i + 1])
			{
				var.j = tab[var.i];
				tab[var.i] = tab[var.i + 1];
				tab[var.i + 1] = var.j;
			}
			(var.i)++;
		}
	}
}

int	*ft_copy(t_table *m)
{
	int		*tmp;
	t_int	var;

	var.i = 0;
	tmp = (int *)malloc(m->a.used * sizeof(int));
	while (var.i < m->a.used)
	{
		tmp[var.i] = m->a.tab[var.i];
		(var.i)++;
	}
	return (tmp);
}

int	ft_check_less_than_pivot(t_table *m, t_int *var, int *tab)
{
	int	i;

	i = 0;
	while (i < m->a.size)
	{
		if (m->a.tab[i] <= tab[var->pivot_3])
			return (1);
		i++;
	}
	return (0);
}

void	ft_big_sort(t_table *m)
{
	int		*tab;
	t_int	var;

	while (m->a.used != 1)
	{
		tab = ft_copy(m);
		ft_sort(tab, m->a.used);
		var.pivot_3 = (m->a.used) / 3;
		var.pivot_2 = var.pivot_3 / 2;
		var.j = 0;
		var.p = 0;
		ft_big_sort2(m, &var, tab);
		free(tab);
	}
	while (m->a.used != m->a.size)
		ft_send(m);
	ft_free_stack(m);
}
