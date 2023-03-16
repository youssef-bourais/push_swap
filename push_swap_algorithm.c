/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algorithm.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:31:09 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/16 12:29:25 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_indice(int nbr, int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (nbr == arr[i])
			return (i);
		else
			i++;
	}
	return (-1);
}

void	ft_sort(t_st *s, int *arr)
{
	int	temp;
	int	i;

	i = 0;
	while (i < s->size_a - 1)
	{
		if (arr[i] > arr[i + 1])
		{
			temp = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = temp;
			i = 0;
		}
		else
			i++;
	}
}

void	push_all_a(t_st *s, int range_1, int range_2, int *arr)
{
	int	size;

	size = s->size_a;
	while (s->size_a != 0)
	{
		if (ft_indice(s->stack_a[s->top_a - 1], arr, size) >= range_1
			&& ft_indice(s->stack_a[s->top_a - 1], arr, size) <= range_2)
		{
			pb(s);
			range_1++;
			range_2++;
		}
		else if (ft_indice(s->stack_a[s->top_a - 1], arr, size) < range_1)
		{
			pb(s);
			rb(s);
			range_1++;
			range_2++;
		}
		else if (ft_indice(s->stack_a[s->top_a - 1], arr, size) > range_2)
			ra(s);
	}
}

void	push_all_b(t_st *s)
{
	int	f;

	while (s->size_b != 1)
	{
		if (ft_max(s->stack_b, s->size_b, &f) == s->stack_b[s->top_b - 1])
			pa(s);
		else
		{
			if (f <= s->size_b / 2)
				rrb(s);
			else
				rb(s);
		}
	}
	pa(s);
}

void	sort_hundred(t_st *s)
{
	int	*arr;
	int	range_1;
	int	range_2;

	arr = (int *)malloc(sizeof(int) * s->size_a);
	range_2 = 0;
	ft_cpy(arr, s->stack_a, s->size_a);
	ft_sort(s, arr);
	range_1 = 0;
	if (s->size_a < 400)
		range_2 = 15;
	else if (s->size_a >= 400)
		range_2 = 30;
	push_all_a(s, range_1, range_2, arr);
	free(arr);
	push_all_b(s);
}
