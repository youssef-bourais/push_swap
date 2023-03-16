/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algorithm_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:20:27 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/15 19:40:04 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(int *arr, int size, int *p)
{
	int	i;
	int	j;
	int	holder;

	i = 0;
	j = 0;
	holder = 0;
	while (i < size && j < size - 1)
	{
		if (arr[i] < arr[j + 1])
		{
			holder = arr[i];
			*p = i;
			j++;
		}
		else
		{
			holder = arr[j + 1];
			*p = i;
			i = j + 1;
			j++;
		}
	}
	return (holder);
}

int	ft_max(int *arr, int size, int *p)
{
	int	i;
	int	j;
	int	holder;

	i = 0;
	j = 0;
	holder = 0;
	while (i < size && j < size - 1)
	{
		if (arr[i] > arr[j + 1])
		{
			holder = arr[i];
			*p = i;
			j++;
		}
		else
		{
			holder = arr[j + 1];
			*p = i;
			i = j + 1;
			j++;
		}
	}
	return (holder);
}

void	*ft_cpy(int *dst, int *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return dst;
}

void	sort_five(t_st *s)
{
	int	f;

	while (s->size_a > 3)
	{
		if (ft_min(s->stack_a, s->size_a, &f) == s->stack_a[s->top_a - 1])
			pb(s);
		else
		{
			if (f <= s->size_b / 2)
				rra(s);
			else
				ra(s);
		}
	}
	if (is_sorted(s->stack_a, s->size_a) != 1)
		sort_three(s);
	while (s->top_b != 0)
		pa(s);
}

void	sort_three(t_st *s)
{
	int	f;

	if (ft_max(s->stack_a, s->size_a, &f) == s->stack_a[s->top_a - 1]
		&& ft_min(s->stack_a, s->size_a, &f) == s->stack_a[0] && s->size_a != 2)
	{
		ra(s);
		sa(s);
	}
	else if ((ft_max(s->stack_a, s->size_a, &f) == s->stack_a[s->top_a - 1]
			&& ft_min(s->stack_a, s->size_a, &f) == s->stack_a[1])
		|| s->size_a == 2)
		ra(s);
	else if (ft_min(s->stack_a, s->size_a, &f) == s->stack_a[s->top_a - 1])
	{
		rra(s);
		sa(s);
	}
	else if (ft_max(s->stack_a, s->size_a, &f) == s->stack_a[0])
		sa(s);
	else
		rra(s);
}
