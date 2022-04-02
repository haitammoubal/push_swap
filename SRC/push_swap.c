/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:50:43 by haitam            #+#    #+#             */
/*   Updated: 2022/04/01 21:15:38 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_table	m;

	if (ac == 1)
		return (1);
	m.a.size = ft_checknumbers(av);
	m.a.tab = ft_double(av, m.a.size);
	m.a.used = m.a.size;
	if (ft_check_sorted(&m) == 1)
		return(free(m.a.tab), 0);
	m.b.size = m.a.size;
	m.b.tab = (int *)malloc(m.b.size * sizeof(int));
	m.b.used = 0;


	printf("\n stack a \n");
	int i = 0;
	while(i < m.a.size)
	{
		printf("%d\n",m.a.tab[i]);
		i++;
	}
	ft_sorting(&m,ac);
	printf("\n stack a \n");
	i = 0;
	while(i < m.a.size)
	{
		printf("%d\n",m.a.tab[i]);
		i++;
	}
	return (0);
}
