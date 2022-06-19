/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort9.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 02:12:11 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 02:19:09 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	buffer_treatment_g(t_stk *stk, int i)
{
	while (stk->buffer[++i] != 0)
	{
		if (check_g(stk, i))
		{
			stk->buffer[i] = -1;
			stk->buffer[i + 1] = -1;
			stk->buffer[i + 2] = 9;
			stk->buffer[i + 3] = 9;
		}
	}
	buffer_treatment_h(stk, i);
}

void	buffer_treatment_h(t_stk *stk, int i)
{
	while (stk->buffer[++i] != 0)
	{
		if ((stk->buffer[i] == 7 && stk->buffer[i + 1] == 7 \
		&& stk->buffer[i + 2] == 8 && stk->buffer[i + 3] == 8) \
		|| (stk->buffer[i] == 8 && stk->buffer[i + 1] == 8 \
		&& stk->buffer[i + 2] == 7 && stk->buffer[i + 3] == 7))
		{
			stk->buffer[i] = -1;
			stk->buffer[i + 1] = -1;
			stk->buffer[i + 2] = 10;
			stk->buffer[i + 3] = 10;
		}
	}
	buffer_treatment_i(stk, i);
}

void	buffer_treatment_i(t_stk *stk, int i)
{
	while (stk->buffer[++i] != 0)
	{
		if ((stk->buffer[i] == 5 && stk->buffer[i + 1] == 6) \
		|| (stk->buffer[i] == 6 && stk->buffer[i + 1] == 5))
		{
			stk->buffer[i] = -1;
			stk->buffer[i + 1] = 9;
		}
		else if ((stk->buffer[i] == 7 && stk->buffer[i + 1] == 8) \
		|| (stk->buffer[i] == 8 && stk->buffer[i + 1] == 7))
		{
			stk->buffer[i] = -1;
			stk->buffer[i + 1] = 10;
		}
	}
}

void	printf_buffer(t_stk *stk)
{
	int	i;

	i = -1;
	while (stk->buffer[++i] != 0)
	{
		if (stk->buffer[i] == -1)
			i++;
		else if (stk->buffer[i] == SA)
			ft_printf("sa\n");
		else if (stk->buffer[i] == SB)
			ft_printf("sb\n");
		else if (stk->buffer[i] == PA)
			ft_printf("pa\n");
		else if (stk->buffer[i] == PB)
			ft_printf("pb\n");
		else if (stk->buffer[i] == RA)
			ft_printf("ra\n");
		printf_buffer_v2(stk, i);
	}
}

void	printf_buffer_v2(t_stk *stk, int i)
{
	if (stk->buffer[i] == RB)
		ft_printf("rb\n");
	else if (stk->buffer[i] == RRA)
		ft_printf("rra\n");
	else if (stk->buffer[i] == RRB)
		ft_printf("rrb\n");
	else if (stk->buffer[i] == RR)
		ft_printf("rr\n");
	else if (stk->buffer[i] == RRR)
		ft_printf("rrr\n");
}
