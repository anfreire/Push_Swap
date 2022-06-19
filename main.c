/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:41:10 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 02:47:23 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int		i;
	t_stk	stk;

	if (starter(&stk, argc, argv))
	{
		ft_putstr_fd(ERROR, 2);
		ft_putstr_fd(NL, 1);
		return (0);
	}
	main_sort(&stk);
	buffer_treatment_a(&stk);
	printf_buffer(&stk);
	free(stk.a);
	free(stk.b);
	free(stk.sorted);
	i = -1;
	while (stk.matrix[++i])
		free(stk.matrix[i]);
	free(stk.matrix);
	return (0);
}
