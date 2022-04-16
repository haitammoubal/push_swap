/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:50:43 by haitam            #+#    #+#             */
/*   Updated: 2022/04/16 13:24:28 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_malloc(void *tab)
{
	if (tab == NULL)
	{
		ft_putstr_fd("malloc error\n", 2);
		exit(1);
	}
}

int	main(int ac, char **av)
{
	t_table	m;

	if (ac == 1)
		return (0);
	m.a.size = ft_checknumbers(av);
	m.a.tab = ft_double(av, m.a.size);
	m.a.used = m.a.size;
	if (ft_check_sorted(&m) == 1)
		return (free(m.a.tab), 0);
	m.b.size = m.a.size;
	m.b.tab = (int *)malloc(m.b.size * sizeof(int));
	ft_malloc(m.b.tab);
	m.b.used = 0;
	ft_sorting(&m, m.a.size);
	return (0);
}
