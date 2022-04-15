/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 08:31:25 by hmoubal           #+#    #+#             */
/*   Updated: 2022/04/15 09:17:58 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	ft_malloc_bonus(void *tab)
{
	if (tab == NULL)
	{
		ft_printf("malloc error\n");
		exit(1);
	}
}

int main(int ac, char **av)
{
	t_table	m;

	if (ac == 1)
		return (1);
	m.a.size = ft_checknumbers_bonus(av);
	m.a.tab = ft_double_bonus(av, m.a.size);
	m.a.used = m.a.size;
	// if (ft_check_sorted_bonus(&m) == 1)
	// 	return (free(m.a.tab), 0);
	m.b.size = m.a.size;
	m.b.tab = (int *)malloc(m.b.size * sizeof(int));
	ft_malloc_bonus(m.b.tab);
	m.b.used = 0;
	// ft_sorting(&m, m.a.size);
}
