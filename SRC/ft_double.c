/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 22:56:28 by hmoubal           #+#    #+#             */
/*   Updated: 2022/03/28 23:51:18 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(char **num)
{
	ft_printf("Error\n");
	ft_free_all(num);
	exit(1);
}

int	ft_atoi_custom(const	char	*str, char **num)
{
	int			i;
	int			sign;
	long int	r;

	i = 0;
	sign = 1;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign = -sign;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		r = (r * 10) + (str[i] - 48);
		i++;
	}
	if ((r * sign) > 2147483647 || (r * sign) < -2147483648)
		ft_error(num);
	return (sign * r);
}

void	ft_double(char **av, int ac)
{
	int		i;
	int		j;
	int		k;
	char	**num;
	int		*tab;

	i = 1;
	num = NULL;
	k = 0;
	tab = NULL;
	while (av[i])
	{
		j = 0;
		num = ft_split(av[i], 32);
		while (num[j])
		{
			k = ft_atoi_custom(num[j], num);
			j++;
		}
		ft_free_all(num);
		i++;
	}
}
