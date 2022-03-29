/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:16:47 by haitam            #+#    #+#             */
/*   Updated: 2022/03/28 23:47:44 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

void	ft_checknumbers(char **av, int ac);
void	ft_free_all(char **str);
int		ft_count(char **str, int k, int j);
void	ft_cont(char **num, int k, int j);
void	ft_double(char **av, int ac);
int		ft_atoi_custom(const	char	*str, char **num);
void	ft_error(char **num);
#endif
