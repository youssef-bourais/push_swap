/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:26:52 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/16 11:36:07 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_st *s)
{
	int	i;
	int	temp;
	int	temp2;

	i = 0;
	temp = s->stack_a[i];
	while (i <= s->top_a - 1)
	{
		s->stack_a[i] = s->stack_a[i + 1];
		i++;
	}
	s->stack_a[s->top_a - 1] = temp;
	write(1, "rr", 2);
	i = 0;
	temp2 = s->stack_b[i];
	while (i <= s->top_b - 1)
	{
		s->stack_b[i] = s->stack_b[i + 1];
		i++;
	}
	s->stack_b[s->top_b - 1] = temp2;
	write(1, "r\n", 2);
}

int	pop_b_b(t_st *s)
{
	s->top_b--;
	return (s->stack_b[s->top_b]);
}

int	pop_a_a(t_st *s)
{
	s->top_a--;
	return (s->stack_a[s->top_a]);
}

int ft_cheack_m(long nbr)
{
	if(nbr > INT_MAX || nbr < INT_MIN)
		return (0);
	return (1);
}
