/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknumbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 23:18:43 by haitam            #+#    #+#             */
/*   Updated: 2022/03/27 17:50:20 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free_all(char **str)
{
	int	i;

	i = 0;
	while(str[i])
		free(str[i++]);
	free(str);
}
void ft_checknumbers(char **av, int ac)
{
	int	i;
	int	j;
	int	k;
	char **num;

	i = 1;
	num = NULL;
	while (av[i])
	{
		k = 0;
		num = ft_split(av[i], 32);
		if (num[k] == NULL)
		{
			ft_printf("Error\n");
			ft_free_all(num);
			exit(1);
		}
		while (num[k])
		{
			j = 0;
			while (num[k][j])
			{
				if (ft_isdigit(num[k][j]) == 0)
				{
					ft_printf("Error\n");
					ft_free_all(num);
					exit(1);
				}
				j++;
			}
			k++;
		}
		ft_free_all(num);
		i++;
	}
}
