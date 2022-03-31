/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitam <haitam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:45:51 by haitam            #+#    #+#             */
/*   Updated: 2022/03/31 00:34:27 by haitam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_table *m, t_int var)
{
	var.i = m->a.tab[0];
	m->a.tab[0] = m->a.tab[1];
	m->a.tab[1] = var.i;
}

void	sb(t_table *m, t_int var)
{
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
	var.i = m->b.tab[0];
	var.j = m->a.size;
	while (var.j != 0)
	{
		m->a.tab[(var.j) - 1] = var.k;
		m->a.tab[(var.j) - 1] = m->a.tab[(var.j) - 2];
		m->a.tab[(var.j) - 2] = var.k;
		(var.j)--;
	}
	m->a.tab[0] = var.i;
}

void	pb(t_table *m, t_int var)
{
	var.i = m->a.tab[0];
	var.j = m->b.size;
	while (var.j != 0)
	{
		m->b.tab[(var.j) - 1] = var.k;
		m->b.tab[(var.j) - 1] = m->b.tab[(var.j) - 2];
		m->b.tab[(var.j) - 2] = var.k;
		(var.j)--;
	}
	m->b.tab[0] = var.i;
}
