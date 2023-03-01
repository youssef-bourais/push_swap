/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:25:53 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/01 12:57:48 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int main(int argc, char *argv[])
{
	t_split result;
	t_st s = {0, 0, 0, 0, 0};
	int i = 1;
	int j;
	int r = 0;
	int f = 0;
	int arr[nbr(argv, argc)];

	if (argc > 1)
	{
		while (i < argc)
		{
			result = ft_split(argv[i], ' ');
			j = 0;
			f = f + result.num;
			while (j < result.num)
			{
				ft_atoi(result.strings[j], &(result.flage));
				if (result.flage != 0)
					arr[r++] = ft_atoi(result.strings[j++], &(result.flage));
				else
					ft_error();
			}
			i++;
		}
		if (ft_dublicat(arr, r) == 1 || r == 0)
			ft_error();
		else
		{
			s.stack_a = (int *)malloc(r * sizeof(int));
			s.stack_b = (int *)malloc(r * sizeof(int));
			s.size = r;
			first_push(&s, arr, r);
		}
	}
	else
		return (1);
	return (0);
}

