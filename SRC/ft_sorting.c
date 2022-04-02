/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:36:50 by hmoubal           #+#    #+#             */
/*   Updated: 2022/04/01 21:20:29 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_three(t_table *m)
{
	t_int	var;

	var.i = 0;
	if (m->a.tab[0] > m->a.tab[1])
		ft_two(m);
	if ((ft_check_sorted(m) == 0))
		rra(m, var);
	if (m->a.tab[0] > m->a.tab[1])
		ft_two(m);
}

void	ft_two(t_table *m)
{
	t_int	var;

	var.i = 0;
	sa(m, var);
}

void	ft_four(t_table *m)
{
	t_int	var;

	var.i = 0;
	pb(m, var);
	ft_three(m);
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
}
