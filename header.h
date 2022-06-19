/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:54:06 by anfreire          #+#    #+#             */
/*   Updated: 2022/06/19 02:08:30 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# define SA 1
# define SB 2
# define PA 3
# define PB 4
# define RA 5
# define RB 6
# define RRA 7
# define RRB 8
# define RR 9
# define RRR 10
# define SPC " "
# define ERROR "Error"
# define NL "\n"
# include "libftprintf/libftprintf.h"

typedef struct s_stk
{
	int			*a;
	int			*b;
	int			size_a;
	int			size_b;
	int			mov_ra;
	int			mov_rra;
	int			mov_rb;
	int			mov_rrb;
	int			*sorted;
	char		**matrix;
	char		*str;
	int			buffer[1000000];
}				t_stk;

//errors
int		starter(t_stk *stk, int argc, char **argv);
void	recieve_parameters(t_stk *stk, char **matrix);
int		ft_is_repeated(char **array);
int		count_lines(char **matrix);
int		ft_is_int(char	**matrix);
int		is_digit(char	**matrix);
//stacks
void	create_stacks(t_stk *stk);
int		*create_stack(t_stk *stk);
int		*create_empty_stack(t_stk *stk);
void	print_stacks(t_stk *stk);
void	sort_stk_sorted(t_stk *stk);
void	ft_op_sa(t_stk *stk);
void	ft_op_ra(t_stk *stk);
void	ft_op_rra(t_stk *stk);
void	ft_op_sb(t_stk *stk);
void	ft_op_rb(t_stk *stk);
void	ft_op_rrb(t_stk *stk);
void	ft_op_pb(t_stk *stk);
void	ft_op_pa(t_stk *stk);
//sorts
void	main_sort(t_stk *stk);
void	sort_less(t_stk *stk);
void	sort_3(t_stk *stk);
void	sort_4(t_stk *stk);
void	sort_5(t_stk *stk);
int		biggest_number_a(t_stk *stk);
int		biggest_number_b(t_stk *stk);
int		smallest_number_a(t_stk *stk);
int		smallest_number_b(t_stk *stk);
void	sort_bigger(t_stk *stk, int start);
void	sort_bigger_v2(t_stk *stk);
void	choose_holds(t_stk *stk, int start);
int		get_hold1(t_stk *stk, int start);
int		get_hold2(t_stk *stk, int start);
void	where_to_put_b(t_stk *stk);
void	sort_from_bottom(t_stk *stk, int nbr);
void	sort_from_top(t_stk *stk, int nbr);
int		fill_buffer(t_stk *stk, int op);
void	buffer_treatment_a(t_stk *stk);
void	printf_buffer(t_stk *stk);
void	normalize(t_stk *stk);
int		check_stack(t_stk *stk);
void	radix_sort(t_stk *stk);
int		check_a(t_stk *stk, int i);
int		check_b(t_stk *stk, int i);
int		check_c(t_stk *stk, int i);
int		check_d(t_stk *stk, int i);
int		check_e(t_stk *stk, int i);
int		check_f(t_stk *stk, int i);
int		check_g(t_stk *stk, int i);
void	buffer_treatment_a(t_stk *stk);
void	buffer_treatment_b(t_stk *stk, int i);
void	buffer_treatment_c(t_stk *stk, int i);
void	buffer_treatment_d(t_stk *stk, int i);
void	buffer_treatment_e(t_stk *stk, int i);
void	buffer_treatment_f(t_stk *stk, int i);
void	buffer_treatment_g(t_stk *stk, int i);
void	buffer_treatment_h(t_stk *stk, int i);
void	buffer_treatment_i(t_stk *stk, int i);
void	printf_buffer_v2(t_stk *stk, int i);
#endif