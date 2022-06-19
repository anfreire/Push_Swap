/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:34:44 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 01:17:02 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	sort_bigger(t_stk *stk, int start)
{
	int	i;

	i = -1;
	while (++i < 10)
	{
		choose_holds(stk, start);
		where_to_put_b(stk);
		ft_op_pb(stk);
		sort_bigger_v2(stk);
	}
}

void	sort_bigger_v2(t_stk *stk)
{
	if (!stk->mov_rrb)
	{
		while (stk->mov_rb > 0)
		{
			ft_op_rb(stk);
			stk->mov_rb--;
		}
	}
	else
	{
		while (stk->mov_rrb >= 0)
		{
			ft_op_rrb(stk);
			stk->mov_rrb--;
		}
	}
	if (stk->b[1] > stk->b[0])
		ft_op_sb(stk);
}

void	choose_holds(t_stk *stk, int start)
{
	stk->mov_rra = get_hold2(stk, start);
	stk->mov_ra = get_hold1(stk, start);
	if (stk->mov_ra < stk->mov_rra)
	{
		while (stk->mov_ra != 0)
		{
			ft_op_ra(stk);
			stk->mov_ra--;
		}
	}
	if (stk->mov_rra <= stk->mov_ra)
	{
		while (stk->mov_rra != 0)
		{
			ft_op_rra(stk);
			stk->mov_rra--;
		}
	}
}

int	get_hold1(t_stk *stk, int start)
{
	int	i;
	int	j;

	i = -1;
	while (++i < stk->size_a)
	{
		j = start - 1;
		while (++j < start + 10)
		{
			if (stk->a[i] == stk->sorted[j])
			{
				return (i);
			}
		}
	}
	return (-1);
}

int	get_hold2(t_stk *stk, int start)
{
	int	j;
	int	i;

	i = stk->size_a - 1;
	while (stk->size_a > i)
	{
		j = start - 1;
		while (++j < start + 10)
		{
			if (stk->a[i] == stk->sorted[j])
				return (stk->size_a - i);
		}
		i--;
	}
	return (-1);
}
