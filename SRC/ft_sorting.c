/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:36:50 by hmoubal           #+#    #+#             */
/*   Updated: 2022/04/14 06:44:33 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_search_min(t_table *m)
{
	t_int	var;

	var.i = 1;
	var.k = m->a.tab[0];
	while (var.i < m->a.used)
	{
		if (var.k > m->a.tab[var.i])
			var.k = m->a.tab[var.i];
		(var.i)++;
	}
	var.i = 0;
	while (var.i < m->a.used)
	{
		if (var.k == m->a.tab[var.i])
			break ;
		(var.i)++;
	}
	return (var.i);
}

void	ft_three(t_table *m)
{
	t_int	var;

	var.i = 0;
	if (m->a.tab[0] > m->a.tab[1])
		ft_two(m);
	if ((ft_check_sorted(m) == 0))
		rra(m, var, 1);
	if (m->a.tab[0] > m->a.tab[1])
		ft_two(m);
}

void	ft_two(t_table *m)
{
	t_int	var;

	var.i = 0;
	sa(m, var, 1);
}

void	ft_four(t_table *m)
{
	t_int	var;

	var.i = ft_search_min(m);
	if (var.i == 1)
		ra(m, var, 1);
	else if (var.i == 2)
	{
		rra(m, var, 1);
		rra(m, var, 1);
	}
	else if (var.i == 3)
		rra(m, var, 1);
	if (ft_check_sorted(m) == 1)
		return (ft_free_stack(m));
	pb(m, var);
	ft_three(m);
	pa(m, var);
}

void	ft_sorting(t_table *m, int ac)
{
	if (ac == 2)
		return ;
	else if (ac == 3)
		ft_two(m);
	else if (ac == 4)
		ft_three(m);
	else if (ac == 5)
		ft_four(m);
	else if (ac == 6)
		ft_five(m);
	else if (ac >= 7 && ac <= 11)
		ft_six_ten(m);
	else if (ac > 11 && ac <= 101)
		ft_big_sort(m);
}
