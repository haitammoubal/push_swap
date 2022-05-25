/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:50:43 by haitam            #+#    #+#             */
/*   Updated: 2022/05/25 17:11:46 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_malloc(void *tab, int *hub, int *t, char **str)
{
	int	i;

	i = 0;
	if (tab == NULL)
	{
		ft_putstr_fd("malloc error\n", 2);
		free(hub);
		free(t);
		while (str[i] != NULL)
			free(str[i++]);
		free(str);
		exit(1);
	}
}

void	ft_malloc_num(char **str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr_fd("malloc error\n", 2);
		exit(1);
	}
}

void	ft_malloc_num2(char **str, int *tab)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr_fd("malloc error\n", 2);
		free(tab);
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
	ft_malloc(m.b.tab, m.a.tab, NULL, NULL);
	m.b.used = 0;
	ft_sorting(&m, m.a.size);
	ft_free_stack(&m);
	return (0);
}
