/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort8.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 02:11:06 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 02:18:09 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	buffer_treatment_b(t_stk *stk, int i)
{
	while (stk->buffer[++i] != 0)
	{
		if (check_b(stk, i))
		{
			stk->buffer[i] = -1;
			stk->buffer[i + 1] = -1;
			stk->buffer[i + 2] = -1;
			stk->buffer[i + 3] = -1;
			stk->buffer[i + 4] = -1;
			stk->buffer[i + 5] = 10;
			stk->buffer[i + 6] = 10;
			stk->buffer[i + 7] = 10;
			stk->buffer[i + 8] = 10;
			stk->buffer[i + 9] = 10;
		}
	}
	buffer_treatment_c(stk, i);
}

void	buffer_treatment_c(t_stk *stk, int i)
{
	while (stk->buffer[++i] != 0)
	{
		if (check_c(stk, i))
		{
			stk->buffer[i] = -1;
			stk->buffer[i + 1] = -1;
			stk->buffer[i + 2] = -1;
			stk->buffer[i + 3] = -1;
			stk->buffer[i + 4] = 9;
			stk->buffer[i + 5] = 9;
			stk->buffer[i + 6] = 9;
			stk->buffer[i + 7] = 9;
		}
	}
	buffer_treatment_d(stk, i);
}

void	buffer_treatment_d(t_stk *stk, int i)
{
	while (stk->buffer[++i] != 0)
	{
		if (check_d(stk, i))
		{
			stk->buffer[i] = -1;
			stk->buffer[i + 1] = -1;
			stk->buffer[i + 2] = -1;
			stk->buffer[i + 3] = -1;
			stk->buffer[i + 4] = 10;
			stk->buffer[i + 5] = 10;
			stk->buffer[i + 6] = 10;
			stk->buffer[i + 7] = 10;
		}
	}
	buffer_treatment_e(stk, i);
}

void	buffer_treatment_e(t_stk *stk, int i)
{
	while (stk->buffer[++i] != 0)
	{
		if (check_e(stk, i))
		{
			stk->buffer[i] = -1;
			stk->buffer[i + 1] = -1;
			stk->buffer[i + 2] = -1;
			stk->buffer[i + 3] = 9;
			stk->buffer[i + 4] = 9;
			stk->buffer[i + 5] = 9;
		}
	}
	buffer_treatment_f(stk, i);
}

void	buffer_treatment_f(t_stk *stk, int i)
{
	while (stk->buffer[++i] != 0)
	{
		if (check_f(stk, i))
		{
			stk->buffer[i] = -1;
			stk->buffer[i + 1] = -1;
			stk->buffer[i + 2] = -1;
			stk->buffer[i + 3] = 10;
			stk->buffer[i + 4] = 10;
			stk->buffer[i + 5] = 10;
		}
	}
	buffer_treatment_g(stk, i);
}
