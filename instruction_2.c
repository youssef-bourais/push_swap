/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:28:17 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/01 12:28:49 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void ra(t_st *s)
{
	int temp;
	int j = s->top_a - 1;
	temp = s->stack_a[j];
	while(j >= 0)
	{
		s->stack_a[j] = s->stack_a[j - 1];
		j --;
	}
	s->stack_a[0] = temp;
	write(1, "ra\n", 3);
}

void rb(t_st *s)
{
	int temp;
	int j = s->top_b - 1;
	temp = s->stack_b[j];
	while(j >= 0)
	{
		s->stack_b[j] = s->stack_b[j - 1];
		j --;
	}
	s->stack_b[0] = temp;
	write(1, "rb\n", 3);
}

void rr(t_st *s)
{
	int temp;
	int j = s->top_a - 1;
	temp = s->stack_a[j];
	while(j >= 0)
	{
		s->stack_a[j] = s->stack_a[j - 1];
		j --;
	}
	s->stack_a[0] = temp;
	write(1, "r", 1);
	
	int temp2;
	j = s->top_b - 1;
	temp2 = s->stack_b[j];
	while(j >= 0)
	{
		s->stack_b[j] = s->stack_b[j - 1];
		j --;
	}
	s->stack_b[0] = temp2;
	write(1, "r\n", 2);
}

void rra(t_st *s)
{
	int i = 0;
	int temp;
	temp = s->stack_a[i];
	while (i <= s->top_a - 1)
	{
		s->stack_a[i] = s->stack_a[i + 1];
		i ++;
	}
	s->stack_a[s->top_a - 1] = temp;
	write(1, "rra\n", 4);
}

void rrb(t_st *s)
{
	int i = 0;
	int temp;
	temp = s->stack_b[i];
	while (i <= s->top_b - 1)
	{
		s->stack_b[i] = s->stack_b[i + 1];
		i ++;
	}
	s->stack_b[s->top_b - 1] = temp;
	write(1, "rrb\n", 4);
}