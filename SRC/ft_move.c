/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitam <haitam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:45:51 by haitam            #+#    #+#             */
/*   Updated: 2022/03/31 22:09:11 by haitam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_table *m, t_int var)
{
	if (m->a.used < 2)
		return ;
	var.i = m->a.tab[0];
	m->a.tab[0] = m->a.tab[1];
	m->a.tab[1] = var.i;
}

void	sb(t_table *m, t_int var)
{
	if (m->b.used < 2)
		return ;
	var.i = m->b.tab[0];
	m->b.tab[0] = m->b.tab[1];
	m->b.tab[1] = var.i;
}

void	ss(t_table *m, t_int var)
{
	sa(m, var);
	sb(m, var);
}

void	pa(t_table *m, t_int var)
{
	if (m->b.used == 0)
		return ;
	var.i = m->b.tab[0];
	var.j = m->a.size;
	while (var.j != 0)
	{
		m->a.tab[(var.j) - 1] = var.k;
		m->a.tab[(var.j) - 1] = m->a.tab[(var.j) - 2];
		m->a.tab[(var.j) - 2] = var.k;
		(var.j)--;
	}
	var.k = 0;
	while (var.k <= m->b.used)
	{
		m->b.tab[(var.k)] = m->b.tab[(var.k) + 1];
		(var.k)++;
	}
	m->a.tab[0] = var.i;
	(m->b.used)--;
	(m->a.used)++;
}

void	pb(t_table *m, t_int var)
{
	if (m->a.used == 0)
		return ;
	var.i = m->a.tab[0];
	var.j = m->b.size;
	while (var.j != 0)
	{
		var.k = m->b.tab[(var.j) - 1];
		m->b.tab[(var.j) - 1] = m->b.tab[(var.j) - 2];
		m->b.tab[(var.j) - 2] = var.k;
		(var.j)--;
	}
	var.k = 0;
	while (var.k <= m->a.used)
	{
		m->a.tab[(var.k)] = m->a.tab[(var.k) + 1];
		(var.k)++;
	}
	m->b.tab[0] = var.i;
	(m->b.used)++;
	(m->a.used)--;
}
