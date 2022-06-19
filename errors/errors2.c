/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:14:57 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 02:16:46 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	is_digit(char	**matrix)
{
	int	i;
	int	j;

	i = -1;
	while (matrix[++i])
	{
		j = -1;
		while (matrix[i][++j])
		{
			if (!((matrix[i][j] >= '0' && matrix[i][j] <= '9') \
			|| matrix[i][j] == ' ' || matrix[i][j] == '-'))
				return (1);
		}
	}
	return (0);
}
