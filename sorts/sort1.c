/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 14:52:09 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 01:10:12 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	main_sort(t_stk *stk)
{
	int	i;

	i = 0;
	if (stk->size_a <= 3)
		sort_3(stk);
	else if (stk->size_a == 4)
		sort_4(stk);
	else if (stk->size_a == 5)
		sort_5(stk);
	else if (stk->size_a == 100)
	{
		while (i <= 90)
		{
			sort_bigger(stk, i);
			i += 10;
		}
		while (stk->size_a != 100)
			ft_op_pa(stk);
	}
	else
	{
		normalize(stk);
		radix_sort(stk);
	}
}

void	sort_less(t_stk *stk)
{
	if (stk->size_a == 1)
		return ;
	if (stk->a[0] > stk->a[1])
		ft_op_sa(stk);
}

void	sort_3(t_stk *stk)
{	
	if (stk->size_a == 2)
	{
		sort_less(stk);
		return ;
	}
	if (stk->a[0] > stk->a[1] && stk->a[1] > stk->a[2])
	{
		ft_op_sa(stk);
		ft_op_rra(stk);
	}
	else if (stk->a[1] > stk->a[2] && stk->a[2] > stk->a[0])
	{
		ft_op_sa(stk);
		ft_op_ra(stk);
	}
	else if (stk->a[0] > stk->a[2] && stk->a[2] > stk->a[1])
		ft_op_ra(stk);
	else if (stk->a[1] > stk->a[0] && stk->a[0] > stk->a[2])
		ft_op_rra(stk);
	else if (stk->a[0] > stk->a[1] && stk->a[1] < stk ->a[2])
		ft_op_sa(stk);
	else
		return ;
}

void	sort_4(t_stk *stk)
{
	if (stk->a[0] > stk->a[1] || stk->a[1] > stk->a[2]
		|| stk->a[2] > stk->a[3])
	{
		if (smallest_number_a(stk) == 1)
			ft_op_ra(stk);
		else if (smallest_number_a(stk) == 2)
		{
			ft_op_ra(stk);
			ft_op_ra(stk);
		}
		else if (smallest_number_a(stk) == 3)
		{
			ft_op_rra(stk);
		}
		ft_op_pb(stk);
		sort_3(stk);
		ft_op_pa(stk);
	}
}

void	sort_5(t_stk *stk)
{	
	if (stk->a[0] > stk->a[1] || stk->a[1] > stk->a[2]
		|| stk->a[2] > stk->a[3] || stk->a[3] > stk->a[4])
	{
		if (smallest_number_a(stk) == 1)
			ft_op_ra(stk);
		else if (smallest_number_a(stk) == 2)
		{
			ft_op_ra(stk);
			ft_op_ra(stk);
		}
		else if (smallest_number_a(stk) == 3)
		{
			ft_op_rra(stk);
			ft_op_rra(stk);
		}
		else if (smallest_number_a(stk) == 4)
			ft_op_rra(stk);
		ft_op_pb(stk);
		sort_4(stk);
		ft_op_pa(stk);
	}
}
