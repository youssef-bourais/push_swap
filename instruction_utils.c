/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:26:52 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/01 12:29:08 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void rrr(t_st *s)
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
	write(1, "rr", 2);

	i = 0;
	int temp2;
	temp2 = s->stack_b[i];
	while (i <= s->top_b - 1)
	{
		s->stack_b[i] = s->stack_b[i + 1];
		i ++;
	}
	s->stack_b[s->top_b - 1] = temp2;
	write(1, "r\n", 2);
}

int pop_b_b(t_st *s)
{
	if(s->top_b != 0)
	{
		s->top_b--;
		return (s->stack_b[s->top_b]);
	}
	else
		write(1, "stack_b is emty\n", 16);
	return (-42);
}

int pop_a_a(t_st *s)
{
	if(s->top_a != 0)
	{
		s->top_a--;
		return (s->stack_a[s->top_a]);
	}
	else
		write(1, "stack_a is emty\n", 16);
	return (-42);
}