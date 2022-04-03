/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 05:24:51 by hmoubal           #+#    #+#             */
/*   Updated: 2022/04/03 05:25:29 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_five(t_table *m)
{
	t_int	var;

	var.i = ft_search(m);
	if (var.i == 1)
		ra(m, var);
	else if (var.i == 2)
	{
		rra(m, var);
		rra(m, var);
	}
	else if (var.i == 3)
		rra(m, var);
	if (ft_check_sorted(m) == 1)
		return (free(m->a.tab), free(m->b.tab));
	pb(m, var);
	ft_four(m);
	pa(m, var);
}

void	ft_six(t_table *m)
{
	t_int	var;

	var.i = ft_search(m);
	if (var.i == 1)
		ra(m, var);
	else if (var.i == 2)
	{
		rra(m, var);
		rra(m, var);
	}
	else if (var.i == 3)
		rra(m, var);
	if (ft_check_sorted(m) == 1)
		return (free(m->a.tab), free(m->b.tab));
	pb(m, var);
	ft_five(m);
	pa(m, var);
}
