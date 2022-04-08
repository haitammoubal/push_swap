/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:57:15 by hmoubal           #+#    #+#             */
/*   Updated: 2022/04/08 12:15:50 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_send(t_table *m, int index)
{
	t_int	var;

	var.i = m->a.tab[index];
	if (index >= (m->a.used / 2))
	{
		while (m->a.tab[0] != var.i)
			ra(m, var);
		ra(m, var);
	}
	else if (index < (m->a.used / 2))
		while (m->a.tab[0] != var.i)
			rra(m, var);
	pb(m,var);
}
