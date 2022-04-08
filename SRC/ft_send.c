/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:57:15 by hmoubal           #+#    #+#             */
/*   Updated: 2022/04/08 21:22:19 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_send(t_table *m, int index)
{
	t_int	var;

	var.i = m->a.tab[index];
	// printf("  stack a \n");
	// int i = 0;
	// while(i < m->a.used)
	// {
	// 	printf("%d\n",m->a.tab[i]);
	// 	i++;
	// }
	if (index >= (m->a.used / 2))
	{
		while (m->a.tab[0] != var.i)
			ra(m, var);
		// ra(m, var);
	}
	else if (index < (m->a.used / 2))
	{
		while (m->a.tab[0] != var.i)
			rra(m, var);
	}
	pb(m, var);
	// printf("  \nstack b \n");
	// i = 0;
	// while(i < m->b.used)
	// {
	// 	printf("%d\n",m->b.tab[i]);
	// 	i++;
	// }


	// printf("  stack a \n");
	// i = 0;
	// while(i < m->a.used)
	// {
	// 	printf("%d\n",m->a.tab[i]);
	// 	i++;
	// }
}
