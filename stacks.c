/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:24:49 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/16 11:39:23 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pop_a(t_st *s)
{
	s->top_a--;
	return (s->stack_a[s->top_a]);
}

int	pop_b(t_st *s)
{
	s->top_b--;
	return (s->stack_b[s->top_b]);
}

void	push_first(t_st *s, int nbr)
{
	s->stack_a[s->top_a] = nbr;
	s->top_a++;
}

void	first_push(t_st *s, int *arr, int r)
{
	while (r - 1 >= 0)
		push_first(s, arr[r-- - 1]);
}

int	is_sorted(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (arr[i] < arr[i + 1])
			return (0);
		else
			i++;
	}
	return (1);
}
