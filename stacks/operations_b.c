/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:28:55 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 02:39:42 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_op_sb(t_stk *stk)
{
	int	tmp;

	if (stk->size_b <= 1)
		return ;
	tmp = stk->b[1];
	stk->b[1] = stk->b[0];
	stk->b[0] = tmp;
	fill_buffer(stk, SB);
}

void	ft_op_rb(t_stk *stk)
{
	int	tmp;
	int	i;

	i = 1;
	tmp = stk->b[0];
	while (i < stk->size_b)
	{
		stk->b[i - 1] = stk->b[i];
		i++;
	}
	i--;
	stk->b[i] = tmp;
	fill_buffer(stk, RB);
}

void	ft_op_rrb(t_stk *stk)
{
	int	tmp;
	int	i;

	i = stk->size_b - 1;
	tmp = stk->b[(stk->size_b - 1)];
	while (i >= 1)
	{
		stk->b[i] = stk->b[i - 1];
		i--;
	}
	stk->b[0] = tmp;
	fill_buffer(stk, RRB);
}

void	ft_op_pb(t_stk *stk)
{
	int	i;
	int	tmp;

	i = -1;
	tmp = stk->a[0];
	while (++i < stk->size_a)
		stk->a[i] = stk->a[i + 1];
	stk->size_a--;
	stk->a[stk->size_a] = '\0';
	i = -1;
	while (++i < stk->size_b)
		stk->b[stk->size_b - i] = stk->b[stk->size_b - 1 - i];
	stk->b[0] = tmp;
	stk->size_b++;
	fill_buffer(stk, PB);
}
