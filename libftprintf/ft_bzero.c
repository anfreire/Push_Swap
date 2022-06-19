/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:41:45 by anfreire          #+#    #+#             */
/*   Updated: 2022/05/28 14:25:15 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*c;

	i = 0;
	c = s;
	if (n == 0)
		return ;
	while (i < n)
	{
		c[i] = 0;
		i++;
	}
}

/*int main()
{
    char str[] = "+-123teste58";
    bzero(str, 5);
	//ft_bzero(str, 5);
    printf("%s" , str);
    return 0;
}*/