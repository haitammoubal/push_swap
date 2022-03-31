/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitam <haitam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:16:47 by haitam            #+#    #+#             */
/*   Updated: 2022/03/31 00:13:01 by haitam           ###   ########.fr       */
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

typedef struct s_stack{
	int	*tab;
	int	size;
}	t_stack;

typedef struct s_table{
	t_stack	a;
	t_stack	b;
}	t_table;

int		ft_checknumbers(char **av);
void	ft_free_all(char **str);
int		ft_count(char **str, int k, int j);
void	ft_cont(char **num, int k, int j, int *sum);
int		*ft_double(char **av, int sum);
int		ft_atoi_custom(const	char	*str, char **num);
void	ft_error(char **num);
void	ft_cont1(char **num, t_int *ints, int *tab);
void	ft_check_sorted(t_table *m, t_int var);
void	sa(t_table *m, t_int var);
void	sb(t_table *m, t_int var);
void	ss(t_table *m, t_int var);
void	pa(t_table *m, t_int var);
void	pb(t_table *m, t_int var);
void	ra(t_table *m, t_int var);
void	rb(t_table *m, t_int var);
void	rr(t_table *m, t_int var);
void	rra(t_table *m, t_int var);
void	rrb(t_table *m, t_int var);
void	rrr(t_table *m, t_int var);
#endif
