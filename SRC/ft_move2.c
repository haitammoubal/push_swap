/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitam <haitam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 00:07:23 by haitam            #+#    #+#             */
/*   Updated: 2022/03/31 00:34:51 by haitam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_table *m, t_int var)
{
	var.i = m->a.tab[0];
	var.j = 1;
	while (var.j < m->a.size)
	{
		m->a.tab[(var.j) - 1] = m->a.tab[var.j];
		(var.j)++;
	}
	m->a.tab[var.j - 1] = var.i;
}

void	rb(t_table *m, t_int var)
{
	var.i = m->b.tab[0];
	var.j = 1;
	while (var.j < m->b.size)
	{
		m->b.tab[(var.j) - 1] = m->b.tab[var.j];
		(var.j)++;
	}
	m->b.tab[var.j - 1] = var.i;
}

void	rr(t_table *m, t_int var)
{
	ra(m, var);
	rb(m, var);
}

void	rra(t_table *m, t_int var)
{
	var.i = m->a.tab[(m->a.size) - 1];
	var.j = (m->a.size) - 1;
	while (var.j != 0)
	{
		(var.j)--;
		m->a.tab[(var.j) + 1] = m->a.tab[var.j];
	}
	m->a.tab[var.j] = var.i;
}

void	rrb(t_table *m, t_int var)
{
	var.i = m->b.tab[(m->b.size) - 1];
	var.j = (m->b.size) - 1;
	while (var.j != 0)
	{
		(var.j)--;
		m->b.tab[(var.j) + 1] = m->b.tab[var.j];
	}
	m->b.tab[var.j] = var.i;
}
