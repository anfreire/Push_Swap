/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:59:36 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 01:13:38 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	biggest_number_a(t_stk *stk)
{
	int	i;
	int	j;

	i = 1;
	j = stk->a[0];
	while (i < stk->size_a)
	{
		if (stk->a[i] > j)
			j = stk->a[i];
		i++;
	}
	i = 0;
	while (i < stk->size_a)
	{
		if (stk->a[i] == j)
			return (i);
		i++;
	}
	return (0);
}

int	biggest_number_b(t_stk *stk)
{
	int	i;
	int	j;

	i = 1;
	j = stk->b[0];
	while (i < stk->size_b)
	{
		if (stk->b[i] > j)
			j = stk->b[i];
		i++;
	}
	i = 0;
	while (i < stk->size_b)
	{
		if (stk->b[i] == j)
			return (i);
		i++;
	}
	return (0);
}

int	smallest_number_a(t_stk *stk)
{
	int	i;
	int	j;

	i = 1;
	j = stk->a[0];
	while (i < stk->size_a)
	{
		if (stk->a[i] < j)
			j = stk->a[i];
		i++;
	}
	i = 0;
	while (i < stk->size_a)
	{
		if (stk->a[i] == j)
			return (i);
		i++;
	}
	return (0);
}

int	smallest_number_b(t_stk *stk)
{
	int	i;
	int	j;

	i = 1;
	j = stk->b[0];
	while (i < stk->size_b)
	{
		if (stk->b[i] < j)
			j = stk->b[i];
		i++;
	}
	i = 0;
	while (i < stk->size_b)
	{
		if (stk->b[i] == j)
			return (i);
		i++;
	}
	return (0);
}
