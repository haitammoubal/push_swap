/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move3_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 00:31:51 by haitam            #+#    #+#             */
/*   Updated: 2022/05/25 17:05:34 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	rrr(t_table *m, t_int var)
{
	rra(m, var);
	rrb(m, var);
}

void	ft_unknown_move(t_table *m)
{
	ft_putstr_fd("Error\n", 2);
	ft_free_stack_bonus(m);
	exit(1);
}

void	ft_malloc_num_bonus(char **str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr_fd("malloc error\n", 2);
		exit(1);
	}
}

void	ft_malloc_num2_bonus(char **str, int *tab)
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
