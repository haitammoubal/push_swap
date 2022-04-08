/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:23:09 by hmoubal           #+#    #+#             */
/*   Updated: 2022/04/08 13:57:22 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_moveall(t_table *m, int *tab, int index)
{
	t_int	var;

	var.i = 0;
	while (var.i < m->a.used)
	{
		var.j = 0;
		while (m->a.tab[var.i] != tab[var.j] && var.j < index)
			(var.j)++;
		if (var.j == index)
		{
			printf("dsgs  %d  %d\n",var.j, var.i);
			ft_send(m, var.i);
			var.i = -1;
		}
		(var.i)++;
	}
}

int	*ft_big_sort2(t_int *var, t_table *m, int *tab_len, int *tab_sub)
{
	int	*tab;

	tab = (int *)malloc((tab_len[var->l]) * sizeof(int));
	var->j = tab_len[var->l] - 1;
	var->k = tab_len[var->l];
	tab[var->j] = var->l;
	while (--var->j != -1)
	{
		tab[var->j] = tab_sub[var->l];
		var->l = tab_sub[var->l];
	}
	var->i = 0;
	while (var->i < var->k)
	{
		tab[var->i] = m->a.tab[tab[var->i]];
		(var->i)++;
	}
	free(tab_len);
	free(tab_sub);
	return (tab);
}

void	ft_algo(t_table *m, int **tab_len, int **tab_sub)
{
	t_int	var;

	var.i = 0;
	while (var.i < m->a.size)
	{
		(*tab_len)[var.i] = 1;
		(var.i)++;
	}
	var.i = 0;
	while (++(var.i) < m->a.size)
	{
		var.j = -1;
		while (++(var.j) < var.i)
		{
			if (m->a.tab[var.j] < m->a.tab[var.i])
			{
				var.k = (*tab_len)[var.j] + 1;
				if (var.k >= (*tab_len)[var.i])
				{
					(*tab_len)[var.i] = var.k;
					(*tab_sub)[var.i] = var.j;
				}
			}
		}
	}
}

int	ft_search2(int *tab_len, t_table *m)
{
	t_int	var;

	var.k = tab_len[0];
	var.i = 0;
	while (var.i < m->a.size)
	{
		if (var.k < tab_len[var.i])
			var.k = tab_len[var.i];
		(var.i)++;
	}
	var.i = 0;
	while (var.i < m->a.size)
	{
		if (var.k == tab_len[var.i])
			break ;
		(var.i)++;
	}
	return (var.i);
}

void	ft_big_sort(t_table *m)
{
	int		*tab_len;
	int		*tab_sub;
	int		*tab;
	t_int	var;

	tab_len = (int *)malloc((m->a.size) * sizeof(int));
	tab_sub = (int *)malloc((m->a.size) * sizeof(int));
	ft_algo(m, &tab_len, &tab_sub);
	var.l = ft_search2(tab_len, m);
	// printf("\n%d\n",var.l);
	var.p = tab_len[var.l];
	tab = ft_big_sort2(&var, m, tab_len, tab_sub);
	// printf("\n%d\n",tab[0]);
	// printf("\n%d\n",tab[1]);
	ft_moveall(m, tab, var.p);
}
