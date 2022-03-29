/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknumbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 23:18:43 by haitam            #+#    #+#             */
/*   Updated: 2022/03/28 23:48:14 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_cont(char **num, int k, int j)
{
	while (num[k])
	{
		j = 0;
		while (num[k][j])
		{
			j = ft_count(num, k, j);
			if (ft_isdigit(num[k][j]) == 0)
				ft_error(num);
			j++;
		}
		k++;
	}
}

int	ft_count(char **str, int k, int j)
{
	while (str[k][j] == ' ')
		j++;
	if (str[k][j] == '-' || str[k][j] == '+')
		j++;
	return (j);
}

void	ft_free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	ft_checknumbers(char **av, int ac)
{
	int		i;
	int		j;
	int		k;
	char	**num;

	i = 1;
	num = NULL;
	while (av[i])
	{
		k = 0;
		num = ft_split(av[i], 32);
		if (num[k] == NULL)
			ft_error(num);
		ft_cont(num, k, j);
		ft_free_all(num);
		i++;
	}
}
