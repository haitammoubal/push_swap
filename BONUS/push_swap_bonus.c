/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 08:31:25 by hmoubal           #+#    #+#             */
/*   Updated: 2022/04/15 10:05:10 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	ft_check(t_table *m)
{
	if (ft_check_sorted_bonus(m) == 1)
	{
		ft_free_stack_bonus(m);
		ft_printf("OK\n");
		exit(0);
	}
	else
	{
		ft_free_stack_bonus(m);
		ft_printf("KO\n");
		exit(0);
	}
}

void	ft_ifs(t_table *m, t_int var, char *tab)
{
	if (ft_strncmp(tab, "sa", 2) == 0)
		sa(m, var);
	else if (ft_strncmp(tab, "sb", 2) == 0)
		sb(m, var);
	else if (ft_strncmp(tab, "ss", 2) == 0)
		ss(m, var);
	else if (ft_strncmp(tab, "pa", 2) == 0)
		pa(m, var);
	else if (ft_strncmp(tab, "pb", 2) == 0)
		pb(m, var);
	else if (ft_strncmp(tab, "ra", 2) == 0)
		ra(m, var);
	else if (ft_strncmp(tab, "rb", 2) == 0)
		rb(m, var);
	else if (ft_strncmp(tab, "rr", 2) == 0)
		rr(m, var);
	else if (ft_strncmp(tab, "rra", 3) == 0)
		rra(m, var);
	else if (ft_strncmp(tab, "rrb", 3) == 0)
		rrb(m, var);
	else if (ft_strncmp(tab, "rrr", 3) == 0)
		rrr(m, var);
	else
		ft_unknown_move(m);
}

void	ft_reset(char *tab)
{
	tab[0] = '\0';
	tab[1] = '\0';
	tab[2] = '\0';
	tab[3] = '\0';
}

void	ft_malloc_bonus(void *tab)
{
	if (tab == NULL)
	{
		ft_printf("malloc error\n");
		exit(1);
	}
}

int	main(int ac, char **av)
{
	t_table	m;
	char	tab[4];
	t_int	var;

	if (ac == 1)
		return (1);
	var.i = 0;
	ft_reset(tab);
	m.a.size = ft_checknumbers_bonus(av);
	m.a.tab = ft_double_bonus(av, m.a.size);
	m.a.used = m.a.size;
	m.b.size = m.a.size;
	m.b.tab = (int *)malloc(m.b.size * sizeof(int));
	ft_malloc_bonus(m.b.tab);
	m.b.used = 0;
	while (read(0, tab, 3) != 0)
	{
		ft_ifs(&m, var, tab);
		ft_reset(tab);
	}
	ft_check(&m);
	return (0);
}
