/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:39:38 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/16 11:51:05 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
#include <limits.h>

typedef struct stacks {
	int	*stack_a;
	int	*stack_b;
	int	top_a;
	int	top_b;
	int	size_a;
	int	size_b;
}	t_st;

typedef struct mystruct {
	int		flage;
	int		num;
	char	**strings;
}	t_split;

void	sa(t_st *s);
void	sb(t_st *s);
void	ss(t_st *s);
void	pa(t_st *s);
void	pb(t_st *s);
void	ra(t_st *s);
void	rb(t_st *s);
void	rr(t_st *s);
void	rra(t_st *s);
void	rrb(t_st *s);
void	rrr(t_st *s);
void	push_first(t_st *s, int nbr);
void	first_push(t_st *s, int *arr, int r);
void	ft_error(void);
void	*ft_memcpy(void *dst, void *src, int n);
void	sort_three(t_st *s);
void	sort_five(t_st *s);
void	sort_hundred(t_st *s);
void	ft_sort(t_st *s, int *arr);
void	push_all_a(t_st *s, int range_1, int range_2, int *arr);
void	sort_hundred(t_st *s);
void	*ft_cpy(int *dst, int *src, int n);
char	*ft_substr(char *s, unsigned int start, int len);
int		pop_b_b(t_st *s);
int		pop_a_a(t_st *s);
int		pop_a(t_st *s);
int		pop_b(t_st *s);
long	ft_atoi(char *str, int *handler);
int		ft_dublicat(int *arr, int len);
int		nbr(char **str, int n);
int		nbr_word(char *str, char c);
int		end_word(char *str, char c);
int		ft_strlen(const char *str);
int		ft_min(int *arr, int size, int *p);
int		ft_max(int *arr, int size, int *p);
int		is_sorted(int *arr, int size);
int		ft_indice(int nbr, int *arr, int size);
t_split	ft_split(char *s, char c);
int 	ft_cheack_m(long nbr);
void	ft_free_table(char **table, int p);

#endif
