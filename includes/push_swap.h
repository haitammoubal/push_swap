/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitam <haitam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:16:47 by haitam            #+#    #+#             */
/*   Updated: 2022/03/29 20:06:05 by haitam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

typedef struct s_int{
	int	l;
	int	p;
	int	k;
	int	j;
	int	i;
}	t_int;

int		ft_checknumbers(char **av);
void	ft_free_all(char **str);
int		ft_count(char **str, int k, int j);
void	ft_cont(char **num, int k, int j, int *sum);
int		*ft_double(char **av, int sum);
int		ft_atoi_custom(const	char	*str, char **num);
void	ft_error(char **num);
void	ft_cont1(char **num, t_int ints, int *tab);
#endif
