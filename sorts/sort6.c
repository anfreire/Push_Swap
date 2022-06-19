/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:34:44 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 02:17:58 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static int	get_bit(int n, int index)
{
	return (n >> index & 1);
}

static int	radix_sort_v2(t_stk *stk, int index)
{
	int	size;

	size = stk->size_b;
	if (stk->size_a > 1)
	{
		while (size--)
			ft_op_pa(stk);
	}
	size = stk->size_a;
	while (size)
	{
		if (check_stack(stk))
			return (1);
		if (get_bit(stk->a[0], index))
			ft_op_ra(stk);
		else
			ft_op_pb(stk);
		size--;
	}
	return (0);
}

void	radix_sort(t_stk *stk)
{
	int	i;

	i = -1;
	while (++i < 33)
	{
		radix_sort_v2(stk, i);
		if (check_stack(stk))
			return ;
	}
}

void	normalize(t_stk *stk)
{
	int	*n;
	int	i;
	int	j;
	int	v;

	i = -1;
	n = malloc(sizeof(int) * (stk->size_a));
	while (++i < stk->size_a)
	{
		j = -1;
		v = 0;
		while (++j < stk->size_a)
		{
			if (stk->a[i] > stk->a[j] && i != j)
				v++;
		}
		n[i] = v;
	}
	free(stk->a);
	stk->a = n;
}

int	check_stack(t_stk *stk)
{
	int	i;
	int	v;

	i = 0;
	if (stk->size_b > 0)
		return (0);
	if (stk->size_a == 0 && stk->size_b == 0)
		return (1);
	v = stk->a[0];
	while (++i < stk->size_a)
	{
		if (v > stk->a[i])
			return (0);
		v = stk->a[i];
	}
	return (1);
}
