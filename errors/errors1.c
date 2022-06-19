/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:46:10 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 02:16:13 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	starter(t_stk *stk, int argc, char **argv)
{
	recieve_parameters(stk, argv);
	if ((argc == 1) || ft_is_repeated(stk->matrix) || ft_is_int(stk->matrix) \
	|| is_digit(stk->matrix))
		return (1);
	create_stacks(stk);
	if (!stk->a || !stk->b || !stk->sorted)
		return (1);
	sort_stk_sorted(stk);
	return (0);
}

void	recieve_parameters(t_stk *stk, char **matrix)
{
	int			i;
	long long	cnt;

	cnt = 0;
	i = 0;
	while (matrix[++i])
		cnt += ft_strlen(matrix[i]) + 1 + i;
	stk->str = malloc(sizeof(char) * (cnt) + 1);
	if (!stk->str)
		return ;
	i = 0;
	while (matrix[++i])
	{
		if (matrix[i])
		{
			ft_strlcat(stk->str, SPC, ft_strlen(stk->str) + 2);
			ft_strlcat(stk->str, matrix[i], ft_strlen(matrix[i]) \
			+ ft_strlen(stk->str) + 1);
		}
	}
	stk->matrix = ft_split(stk->str, 32);
	free(stk->str);
	stk->size_a = count_lines(stk->matrix);
}

int	count_lines(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		i++;
	}
	return (i);
}

int	ft_is_repeated(char **matrix)
{
	int	i;
	int	j;

	i = 0;
	while (matrix[++i])
	{
		j = 0;
		while (matrix[j])
		{
			if (i == j)
				break ;
			else if (ft_atoi(matrix[i]) == ft_atoi(matrix[j]))
				return (1);
			j++;
		}
	}
	return (0);
}

int	ft_is_int(char	**matrix)
{
	long long	nbr;
	int			i;
	int			j;
	int			sign;

	j = -1;
	sign = 1;
	while (matrix[++j])
	{
		nbr = 0;
		i = 0;
		if (matrix[j][i] == '-')
		{	
			sign = -1;
			i++;
		}
		while (matrix[j][i] >= '0' && matrix[j][i] <= '9')
		{
			nbr *= 10;
			nbr += matrix[j][i++] - '0';
		}
		if (nbr * sign > 2147483647 || nbr * sign < -2147483648)
			return (1);
	}
	return (0);
}
