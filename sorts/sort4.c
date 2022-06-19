/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:01:53 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 01:17:47 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	where_to_put_b(t_stk *stk)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (i < stk->size_b)
	{
		if (stk->a[0] < stk->b[i])
			nbr = i;
		i++;
	}
	if (nbr == 0)
	{
		stk->mov_rrb = 0;
		stk->mov_rb = 0;
		return ;
	}
	if (nbr < stk->size_b / 2)
		sort_from_top(stk, nbr);
	else
		sort_from_bottom(stk, nbr);
}

void	sort_from_bottom(t_stk *stk, int nbr)
{
	int	cnt;

	nbr = stk->size_b - nbr - 1;
	cnt = nbr;
	while (nbr > 0)
	{
		ft_op_rrb(stk);
		nbr--;
	}
	stk->mov_rrb = 0;
	stk->mov_rb = cnt + 1;
}

void	sort_from_top(t_stk *stk, int nbr)
{
	int	cnt;

	cnt = nbr;
	while (nbr >= 0)
	{
		ft_op_rb(stk);
		nbr--;
	}
	stk->mov_rrb = cnt;
	stk->mov_rb = 0;
}
