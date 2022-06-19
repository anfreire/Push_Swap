/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 20:54:05 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 02:17:02 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	fill_buffer(t_stk *stk, int op)
{
	static int	i = 0;

	if (op == 0)
		return (i);
	stk->buffer[i] = op;
	i++;
	return (i);
}

int	check_a(t_stk *stk, int i)
{
	return ((stk->buffer[i] == 5 && stk->buffer[i + 1] == 5 && \
	stk->buffer[i + 2] == 5 && stk->buffer[i + 3] == 5 && \
	stk->buffer[i + 4] == 5 && stk->buffer[i + 5] == 6 && \
	stk->buffer[i + 6] == 6 && stk->buffer[i + 7] == 6 && \
	stk->buffer[i + 8] == 6 && stk->buffer[i + 9] == 6) \
	|| (stk->buffer[i] == 6 && stk->buffer[i + 1] == 6 && \
	stk->buffer[i + 2] == 6 && stk->buffer[i + 3] == 6 && \
	stk->buffer[i + 4] == 6 && stk->buffer[i + 5] == 5 && \
	stk->buffer[i + 6] == 5 && stk->buffer[i + 7] == 5 && \
	stk->buffer[i + 8] == 5 && stk->buffer[i + 9] == 5));
}

int	check_b(t_stk *stk, int i)
{
	return ((stk->buffer[i] == 7 && stk->buffer[i + 1] == 7 \
	&& stk->buffer[i + 2] == 7 && stk->buffer[i + 3] == 7 \
	&& stk->buffer[i + 4] == 7 && stk->buffer[i + 5] == 8 \
	&& stk->buffer[i + 6] == 8 && stk->buffer[i + 7] == 8 \
	&& stk->buffer[i + 8] == 8 && stk->buffer[i + 9] == 8) \
	|| (stk->buffer[i] == 8 && stk->buffer[i + 1] == 8 \
	&& stk->buffer[i + 2] == 8 && stk->buffer[i + 3] == 8 \
	&& stk->buffer[i + 4] == 8 && stk->buffer[i + 5] == 7 \
	&& stk->buffer[i + 6] == 7 && stk->buffer[i + 7] == 7 \
	&& stk->buffer[i + 8] == 7 && stk->buffer[i + 9] == 7));
}

int	check_c(t_stk *stk, int i)
{
	return ((stk->buffer[i] == 5 && stk->buffer[i + 1] == 5 \
	&& stk->buffer[i + 2] == 5 && stk->buffer[i + 3] == 5 \
	&& stk->buffer[i + 4] == 6 && stk->buffer[i + 5] == 6 \
	&& stk->buffer[i + 6] == 6 && stk->buffer[i + 7] == 6) \
	|| (stk->buffer[i] == 6 && stk->buffer[i + 1] == 6 \
	&& stk->buffer[i + 2] == 6 && stk->buffer[i + 3] == 6 \
	&& stk->buffer[i + 4] == 5 && stk->buffer[i + 5] == 5 \
	&& stk->buffer[i + 6] == 5 && stk->buffer[i + 7] == 5));
}

int	check_d(t_stk *stk, int i)
{
	return ((stk->buffer[i] == 7 && stk->buffer[i + 1] == 7 \
	&& stk->buffer[i + 2] == 7 && stk->buffer[i + 3] == 7 \
	&& stk->buffer[i + 4] == 8 && stk->buffer[i + 5] == 8 \
	&& stk->buffer[i + 6] == 8 && stk->buffer[i + 7] == 8) \
	|| (stk->buffer[i] == 8 && stk->buffer[i + 1] == 8 \
	&& stk->buffer[i + 2] == 8 && stk->buffer[i + 3] == 8 \
	&& stk->buffer[i + 4] == 7 && stk->buffer[i + 5] == 7 \
	&& stk->buffer[i + 6] == 7 && stk->buffer[i + 7] == 7));
}
