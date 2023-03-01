/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:24:49 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/01 12:31:34 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void push_a(t_st *s, int nbr)
{
	if(s->top_a < s->size)
	{
		s->stack_a[s->top_a] = nbr;
		s->top_a++;
		write(1, "push_a\n", 7);
	}
	else
		write(1, "stack_a is full\n", 16);
}

void push_b(t_st *s, int nbr)
{
	if(s->top_b < s->size)
	{
		s->stack_b[s->top_b] = nbr;
		s->top_b++;
		write(1, "push_b\n", 7);
	}
	else
		write(1, "stack_b is full\n", 16);
}

int pop_a(t_st *s)
{
	if(s->top_a != 0)
	{
		s->top_a--;
		write(1, "pop_a\n", 6);
		return (s->stack_a[s->top_a]);
	}
	else
		write(1, "stack_a is emty\n", 16);
	return (-42);
}

int pop_b(t_st *s)
{
	if(s->top_b != 0)
	{
		s->top_b--;
		write(1, "pop_b\n", 6);
		return (s->stack_b[s->top_b]);
	}
	else
		write(1, "stack_b is emty\n", 16);
	return (-42);
}