/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:22:24 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 02:42:06 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	create_stacks(t_stk *stk)
{
	stk->a = create_stack(stk);
	stk->sorted = create_stack(stk);
	stk->b = create_empty_stack(stk);
}

int	*create_stack(t_stk *stk)
{
	int	*stack;
	int	i;

	i = -1;
	stack = malloc(sizeof(int) * (stk->size_a));
	if (!stack)
		return (NULL);
	while (++i < stk->size_a)
		stack[i] = ft_atoi(stk->matrix[i]);
	i = 0;
	return (stack);
}

int	*create_empty_stack(t_stk *stk)
{
	int	*stack;

	stack = malloc(sizeof(int) * stk->size_a);
	stk->size_b = 0;
	if (!stack)
		return (NULL);
	return (stack);
}

void	print_stacks(t_stk *stk)
{
	int	i;

	i = 0;
	ft_printf("\nStack A			       Stack B\n");
	while (i < stk->size_a || i < stk->size_b)
	{
		ft_printf("%d				 %d\n", stk->a[i], stk->b[i]);
		i++;
	}
	ft_printf("Stack A Len = %d		    Stack B Len = %d\n", \
	stk->size_a, stk->size_b);
}

void	sort_stk_sorted(t_stk *stk)
{
	int	i;
	int	j;
	int	temp;

	i = 1;
	while (i <= stk->size_a - 1)
	{
		j = i;
		while (j > 0 && stk->sorted[j - 1] > stk->sorted[j])
		{
			temp = stk->sorted[j];
			stk->sorted[j] = stk->sorted[j - 1];
			stk->sorted[j - 1] = temp;
			j--;
		}
		i++;
	}
}
