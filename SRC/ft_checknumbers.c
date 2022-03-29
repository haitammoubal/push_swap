/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknumbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitam <haitam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 23:18:43 by haitam            #+#    #+#             */
/*   Updated: 2022/03/29 19:49:31 by haitam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_cont(char **num, int k, int j, int *sum)
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
	(*sum) += k;
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

int	ft_checknumbers(char **av)
{
	int		i;
	int		j;
	int		k;
	char	**num;
	int		sum;

	i = 1;
	sum = 0;
	num = NULL;
	while (av[i])
	{
		k = 0;
		num = ft_split(av[i], 32);
		if (num[k] == NULL)
			ft_error(num);
		ft_cont(num, k, j, &sum);
		ft_free_all(num);
		i++;
	}
	return (sum);
}
