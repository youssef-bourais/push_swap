/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:39:38 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/01 12:50:36 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef	struct stacks {
    int *stack_a;
    int *stack_b;
    int top_a;
    int top_b;
	int size;
} t_st;

typedef struct mystruct {
    char **strings;
    int num;
	int flage;
} t_split;

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void sa(t_st *s);
void sb(t_st *s);
void ss(t_st *s);
void pa(t_st *s);
void pb(t_st *s);
void ra(t_st *s);
void rb(t_st *s);
void rr(t_st *s);
void rra(t_st *s);
void rrb(t_st *s);
void rrr(t_st *s);
int pop_b_b(t_st *s);
int pop_a_a(t_st *s);
void push_a(t_st *s, int nbr);
void push_b(t_st *s, int nbr);
int pop_a(t_st *s);
int pop_b(t_st *s);
void	print_stacks(t_st *s);
void push_first(t_st *s, int nbr);
void first_push(t_st *s, int *arr, int r);
int	ft_atoi(char *str, int *handler);
int ft_dublicat(int *arr, int len);
void ft_error(void);
int nbr(char **str, int n);
int	nbr_word(char *str, char c);
int	end_word(char *str, char c);
int	ft_strlen(const char *str);
void	*ft_memcpy(void *dst, const void *src, int n);
char	*ft_substr(char *s, unsigned int start, int len);
t_split	ft_split(char *s, char c);

#endif
