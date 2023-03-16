/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:13:58 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/15 13:20:30 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_st *s)
{
	int	temp;

	if (s->top_a > 1)
	{
		temp = s->stack_a[s->top_a - 1];
		s->stack_a[s->top_a - 1] = s->stack_a[s->top_a - 2];
		s->stack_a[s->top_a - 2] = temp;
		write(1, "sa\n", 3);
	}
}

void	sb(t_st *s)
{
	int	temp;

	if (s->top_b > 1)
	{
		temp = s->stack_b[s->top_b - 1];
		s->stack_b[s->top_b - 1] = s->stack_b[s->top_b - 2];
		s->stack_b[s->top_b - 2] = temp;
		write(1, "sb\n", 3);
	}
}

void	ss(t_st *s)
{
	int	temp;
	int	temp2;

	if (s->top_a > 1)
	{
		temp = s->stack_a[s->top_a - 1];
		s->stack_a[s->top_a - 1] = s->stack_a[s->top_a - 2];
		s->stack_a[s->top_a - 2] = temp;
		write(1, "s", 1);
	}
	if (s->top_b > 1)
	{
		temp2 = s->stack_b[s->top_b - 1];
		s->stack_b[s->top_b - 1] = s->stack_b[s->top_b - 2];
		s->stack_b[s->top_b - 2] = temp2;
		write(1, "s\n", 2);
	}
}

void	pa(t_st *s)
{
	if (s->top_b != 0)
	{
		s->stack_a[s->top_a] = pop_b_b(s);
		s->top_a++;
		s->size_b--;
		s->size_a++;
		write(1, "pa\n", 3);
	}
}

void	pb(t_st *s)
{
	if (s->top_a != 0)
	{
		s->stack_b[s->top_b] = pop_a_a(s);
		s->top_b++;
		s->size_a--;
		s->size_b++;
		write(1, "pb\n", 3);
	}
}
