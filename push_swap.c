/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:25:53 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/16 13:13:14 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	ft_free_table(char **table, int p)
{
	int	i;

	i = 0;
	i = 0;
	while (i < p)
	{
		free(table[i]);
		i++;
	}
	free(table);
}

int *ft_parssing(int argc, char **argv, int *z, int *y)
{
	t_split result;
	int *arr = (int *)malloc(nbr(argv, argc) * sizeof(int));
	int i = 1;
	int j;
	int r = 0;
	int m;

	while (i < argc)
		{
			result = ft_split(argv[i], ' ');
			j = 0;
			while (j < result.num)
			{
				m = ft_cheack_m(ft_atoi(result.strings[j], &(result.flage)));
				if (result.flage != 0 && m == 1)
					arr[r++] = ft_atoi(result.strings[j++], &(result.flage));
				else
					ft_error();
			}
			ft_free_table(result.strings, result.num);
			i++;
		}
		*z = r;
		*y = result.num;
		return arr;
}

int main(int argc, char *argv[])
{
	t_st s = {0, 0, 0, 0, 0, 0};
	// int arr[nbr(argv, argc)];
	// int i = 1;
	// int j;
	// int r = 0;
	// int m;

	// if (argc > 1)
	// {
	// 	while (i < argc)
	// 	{
	// 		result = ft_split(argv[i], ' ');
	// 		j = 0;
	// 		while (j < result.num)
	// 		{
	// 			m = ft_cheack_m(ft_atoi(result.strings[j], &(result.flage)));
	// 			if (result.flage != 0 && m == 1)
	// 				arr[r++] = ft_atoi(result.strings[j++], &(result.flage));
	// 			else
	// 				ft_error();
	// 		}
	// 		ft_free_table(result.strings, result.num);
	// 		i++;
	// 	}
	int z;
	int y;
	int *arr;
	arr = ft_parssing(argc, argv, &z, &y);
		if (ft_dublicat(arr, z) == 1 || y == 0)
			ft_error();
		else
		{
			s.stack_a = (int *)malloc(z * sizeof(int));
			s.stack_b = (int *)malloc(z * sizeof(int));
			s.size_a = z;
			s.size_b = 0;
			first_push(&s, arr, z);
			if(is_sorted(s.stack_a, s.size_a) == 1)
				exit(0);
			if (s.size_a > 5)
				sort_hundred(&s);
			else if(s.size_a == 5 || s.size_a == 4)
				sort_five(&s);
			else if (s.size_a <= 3)
				sort_three(&s);
		}
	// }
	return (0);
}
