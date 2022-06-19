/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:04:26 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 02:39:22 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_op_sa(t_stk *stk)
{
	int	tmp;

	if (stk->size_a <= 1)
		return ;
	tmp = stk->a[1];
	stk->a[1] = stk->a[0];
	stk->a[0] = tmp;
	fill_buffer(stk, SA);
}

void	ft_op_ra(t_stk *stk)
{
	int	tmp;
	int	i;

	i = 1;
	tmp = stk->a[0];
	while (i < stk->size_a)
	{
		stk->a[i - 1] = stk->a[i];
		i++;
	}
	i--;
	stk->a[i] = tmp;
	fill_buffer(stk, RA);
}

void	ft_op_rra(t_stk *stk)
{
	int	tmp;
	int	i;

	i = stk->size_a - 1;
	tmp = stk->a[(stk->size_a - 1)];
	while (i >= 1)
	{
		stk->a[i] = stk->a[i - 1];
		i--;
	}
	stk->a[0] = tmp;
	fill_buffer(stk, RRA);
}

void	ft_op_pa(t_stk *stk)
{
	int	i;
	int	tmp;

	i = -1;
	tmp = stk->b[0];
	while (++i < stk->size_b)
		stk->b[i] = stk->b[i + 1];
	stk->size_b--;
	stk->b[stk->size_b] = '\0';
	i = -1;
	while (++i < stk->size_a)
		stk->a[stk->size_a - i] = stk->a[stk->size_a - 1 - i];
	stk->a[0] = tmp;
	stk->size_a++;
	fill_buffer(stk, PA);
}
