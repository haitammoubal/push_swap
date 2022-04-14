/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:23:09 by hmoubal           #+#    #+#             */
/*   Updated: 2022/04/14 00:48:00 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void	ft_moveall(t_table *m, int *tab, int index)
// {
// 	t_int	var;

// 	var.i = 0;
// 	while (var.i < m->a.used)
// 	{
// 		var.j = 0;
// 		while (m->a.tab[var.i] != tab[var.j] && var.j < index)
// 			(var.j)++;
// 		if (var.j == index)
// 		{
// 			//printf("dsgs  %d  %d\n",var.j, var.i);
// 			ft_send(m, var.i);
// 			var.i = -1;
// 		}
// 		(var.i)++;
// 	}
// }

// int	*ft_big_sort2(t_int *var, t_table *m, int *tab_len, int *tab_sub)
// {
// 	int	*tab;

// 	tab = (int *)malloc((tab_len[var->l]) * sizeof(int));
// 	var->j = tab_len[var->l] - 1;
// 	var->k = tab_len[var->l];
// 	tab[var->j] = var->l;
// 	while (--var->j != -1)
// 	{
// 		tab[var->j] = tab_sub[var->l];
// 		var->l = tab_sub[var->l];
// 	}
// 	var->i = 0;
// 	while (var->i < var->k)
// 	{
// 		tab[var->i] = m->a.tab[tab[var->i]];
// 		(var->i)++;
// 	}
// 	free(tab_len);
// 	free(tab_sub);
// 	return (tab);
// }

// void	ft_algo(t_table *m, int **tab_len, int **tab_sub)
// {
// 	t_int	var;

// 	var.i = 0;
// 	while (var.i < m->a.size)
// 	{
// 		(*tab_len)[var.i] = 1;
// 		(var.i)++;
// 	}
// 	var.i = 0;
// 	while (++(var.i) < m->a.size)
// 	{
// 		var.j = -1;
// 		while (++(var.j) < var.i)
// 		{
// 			if (m->a.tab[var.j] < m->a.tab[var.i])
// 			{
// 				var.k = (*tab_len)[var.j] + 1;
// 				if (var.k >= (*tab_len)[var.i])
// 				{
// 					(*tab_len)[var.i] = var.k;
// 					(*tab_sub)[var.i] = var.j;
// 				}
// 			}
// 		}
// 	}
// }

// int	ft_search2(int *tab_len, t_table *m)
// {
// 	t_int	var;

// 	var.k = tab_len[0];
// 	var.i = 0;
// 	while (var.i < m->a.size)
// 	{
// 		if (var.k < tab_len[var.i])
// 			var.k = tab_len[var.i];
// 		(var.i)++;
// 	}
// 	var.i = 0;
// 	while (var.i < m->a.size)
// 	{
// 		if (var.k == tab_len[var.i])
// 			break ;
// 		(var.i)++;
// 	}
// 	return (var.i);
// }


// int	ft_find_big_seq(t_table *m)
// {
// 	int		*tab_len;
// 	int		*tab_sub;
// 	int		*tab;
// 	int		*tmp;
// 	t_int	var;

// 	var.i = 0;
// 	tab_len = (int *)malloc((m->a.size) * sizeof(int));
// 	tab_sub = (int *)malloc((m->a.size) * sizeof(int));
// 	tab = (int *)malloc((m->a.size) * sizeof(int));
// 	tmp = ft_copy(m);
// 	while (var.i < m->a.size)
// 	{
// 		ft_algo(m, &tab_len, &tab_sub);
// 		var.l = ft_search2(tab_len, m);
// 		var.p = tab_len[var.l];
// 		tab[var.i] = var.p;
// 		(var.i)++;
// 		var.k = tmp[0];
// 		var.j = 1;
// 		while (var.j < m->a.used)
// 		{
// 			tmp[(var.j) - 1] = tmp[var.j];
// 			(var.j)++;
// 		}
// 		tmp[var.j - 1] = var.k;
// 	}
// 	var.i = 0;
// 	while (var.i < m->a.size)
// 	{
// 		printf("%d\n", tab[var.i]);
// 		(var.i)++;
// 	}
// 	var.i = tab[ft_search2(tab, m)];
// 	return (free(tab), free(tab_len), free(tab_sub), var.i);
// }

// void	ft_big_sort(t_table *m)
// {
// 	int		*tab_len;
// 	int		*tab_sub;
// 	int		*tab;
// 	t_int	var;

// 	var.big_seq = ft_find_big_seq(m);
// 	tab_len = (int *)malloc((m->a.size) * sizeof(int));
// 	tab_sub = (int *)malloc((m->a.size) * sizeof(int));
// 	ft_algo(m, &tab_len, &tab_sub);
// 	var.l = ft_search2(tab_len, m);
// 	var.p = tab_len[var.l];
// 	if (var.big_seq != var.p)
// 	{
// 		ra(m, var);
// 		free(tab_len);
// 		free(tab_sub);
// 		ft_big_sort(m);
// 	}
// 	tab = ft_big_sort2(&var, m, tab_len, tab_sub);
// 	ft_moveall(m, tab, var.p);
// 	// var.i = 0;
// 	// while (var.i < m->b.used)
// 	// {
// 	// 	var.j = 0;
// 	// 	while (var.j < m->a.used)
// 	// 	{
// 	// 		if (m->a.tab[var.j] && m->b.tab[var.i] && m->a.tab[var.j + 1] &&
// 	// 			m->a.tab[var.j] < m->b.tab[var.i] && m->b.tab[var.i] < m->a.tab[var.j + 1])
// 	// 		{
// 	// 			ft_putnbr_fd(m->b.tab[var.i],0);
// 	// 			ft_putendl_fd("----",0);
// 	// 			break ;
// 	// 		}
// 	// 		var.j++;
// 	// 	}
// 	// 	var.i++;
// 	// }
// }

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
	tmp = (int *)malloc(m->a.size * sizeof(int));
	while (var.i < m->a.size)
	{
		tmp[var.i] = m->a.tab[var.i];
		(var.i)++;
	}
	return (tmp);
}

void	ft_big_sort(t_table *m)
{
	int		*tab;
	t_int	var;

	tab = ft_copy(m);
	ft_sort(tab, m->a.size);
	var.pivot_3 = (m->a.size) / 3;
	var.pivot_2 = var.pivot_3 / 2;
	var.j = 0;
	while (var.j < m->a.used)
	{
		if (m->a.tab[var.j] <= tab[var.pivot_3])
		{
			if (m->b.used > 0)
				if (m->a.tab[var.j] < tab[var.pivot_2])
					rb(m, var);
			pb(m, var);
		}
		(var.j)++;
	}
}
