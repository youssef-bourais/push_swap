/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:31:09 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/01 12:31:30 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	print_stacks(t_st *s)
{
	int i = s->top_a - 1;
	int j = 0;
	while (i >= 0)
	{
		printf("%d\n", s->stack_a[i]);
		i--;
	}
	write(1, "-\na\n\n", 5);
	if (j < s->top_b)
	{
		while (j < s->top_b)
		{
			printf("%d\n", s->stack_b[j]);
			j++;
		}
		write(1, "-\nb\n\n", 5);
	}
	write(1, "------\n", 7);
}

void push_first(t_st *s, int nbr)
{
	if(s->top_a < s->size)
	{
		s->stack_a[s->top_a] = nbr;
		s->top_a++;
	}
	else
		write(1, "stack_a is full\n", 16);
}

void first_push(t_st *s, int *arr, int r)
{
	while (r - 1 >= 0)
		push_first(s, arr[r-- - 1]);
	print_stacks(s);
}