/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:13:58 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/01 12:28:59 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void sa(t_st *s)
{
	int temp; 
	if(s->top_a > 1)
	{
		temp = s->stack_a[s->top_a - 1];
		s->stack_a[s->top_a - 1] = s->stack_a[s->top_a - 2];
		s->stack_a[s->top_a - 2] = temp;
		write(1, "sa\n", 3);
	}
}

void sb(t_st *s)
{
	int temp; 
	if(s->top_b > 1)
	{
		temp = s->stack_b[s->top_b - 1];
		s->stack_b[s->top_b - 1] = s->stack_b[s->top_b - 2];
		s->stack_b[s->top_b - 2] = temp;
		write(1, "sb\n", 3);
	}
}

void ss(t_st *s)
{
	int temp; 
	if(s->top_a > 1)
	{
		temp = s->stack_a[s->top_a - 1];
		s->stack_a[s->top_a - 1] = s->stack_a[s->top_a - 2];
		s->stack_a[s->top_a - 2] = temp;
		write(1, "s", 1);
	}

	int temp2; 
	if(s->top_b > 1)
	{
		temp2 = s->stack_b[s->top_b - 1];
		s->stack_b[s->top_b - 1] = s->stack_b[s->top_b - 2];
		s->stack_b[s->top_b - 2] = temp2;
		write(1, "s\n", 2);
	}
}

void pa(t_st *s)
{
	if(s->top_b != 0)
	{
		if(s->top_a < s->size)
		{
			s->stack_a[s->top_a] = pop_b_b(s);
			s->top_a++;
			write(1, "pa\n", 3);
		}
		else
			write(1, "stack_a is full\n", 16);
	}
}

void pb(t_st *s)
{
	if(s->top_a != 0)
	{
		if(s->top_b < s->size)
		{
			s->stack_b[s->top_b] = pop_a_a(s);
			s->top_b++;
			write(1, "pb\n", 3);
		}
		else
			write(1, "stack_b is full\n", 16);
	}
}