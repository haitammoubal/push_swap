/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 08:32:06 by hmoubal           #+#    #+#             */
/*   Updated: 2022/04/15 09:14:27 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/includes/libft.h"

typedef struct s_int{
	int	l;
	int	p;
	int	k;
	int	j;
	int	i;
	int	pivot_3;
	int	pivot_2;
	int	p_pivot;
}	t_int;

typedef struct s_stack{
	int	*tab;
	int	size;
	int	used;
}	t_stack;

typedef struct s_table{
	t_stack	a;
	t_stack	b;
}	t_table;

int		ft_checknumbers_bonus(char **av);
void	ft_free_all_bonus(char **str);
int		ft_count_bonus(char **str, int k, int j);
void	ft_cont_bonus(char **num, int k, int j, int *sum);
int		*ft_double_bonus(char **av, int sum);
int		ft_atoi_custom_bonus(const	char	*str, char **num);
void	ft_error_bonus(char **num);
void	ft_cont1_bonus(char **num, t_int *ints, int *tab);
int		ft_check_sorted_bonus(t_table *m);
void	ft_free_stack_bonus(t_table *m);
void	ft_malloc_bonus(void *tab);
#endif
