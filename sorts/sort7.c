/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:34:23 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 02:48:46 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	check_e(t_stk *stk, int i)
{
	return ((stk->buffer[i] == 5 && stk->buffer[i + 1] == 5 \
	&& stk->buffer[i + 2] == 5 && stk->buffer[i + 3] == 6 \
	&& stk->buffer[i + 4] == 6 && stk->buffer[i + 5] == 6) \
		|| (stk->buffer[i] == 6 && stk->buffer[i + 1] == 6 \
		&& stk->buffer[i + 2] == 6 && stk->buffer[i + 3] == 5 \
		&& stk->buffer[i + 4] == 5 && stk->buffer[i + 5] == 5));
}

int	check_f(t_stk *stk, int i)
{
	return ((stk->buffer[i] == 7 && stk->buffer[i + 1] == 7 \
	&& stk->buffer[i + 2] == 7 && stk->buffer[i + 3] == 8 \
	&& stk->buffer[i + 4] == 8 && stk->buffer[i + 5] == 8) \
		|| (stk->buffer[i] == 8 && stk->buffer[i + 1] == 8 \
		&& stk->buffer[i + 2] == 8 && stk->buffer[i + 3] == 7 \
		&& stk->buffer[i + 4] == 7 && stk->buffer[i + 5] == 7));
}

int	check_g(t_stk *stk, int i)
{
	return ((stk->buffer[i] == 5 && stk->buffer[i + 1] == 5 \
	&& stk->buffer[i + 2] == 6 && stk->buffer[i + 3] == 6) \
		|| (stk->buffer[i] == 6 && stk->buffer[i + 1] == 6 \
		&& stk->buffer[i + 2] == 5 && stk->buffer[i + 3] == 5));
}

void	buffer_treatment_a(t_stk *stk)
{
	int	i;

	i = -1;
	while (stk->buffer[++i] != 0)
	{
		if (check_a(stk, i))
		{
			stk->buffer[i] = -1;
			stk->buffer[i + 1] = -1;
			stk->buffer[i + 2] = -1;
			stk->buffer[i + 3] = -1;
			stk->buffer[i + 4] = -1;
			stk->buffer[i + 5] = 9;
			stk->buffer[i + 6] = 9;
			stk->buffer[i + 7] = 9;
			stk->buffer[i + 8] = 9;
			stk->buffer[i + 9] = 9;
		}
	}
	buffer_treatment_b(stk, i);
}
