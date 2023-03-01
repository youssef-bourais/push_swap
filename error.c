/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:36:14 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/01 12:37:11 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int	ft_atoi(char *str, int *handler)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = sign * (-1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (!(str[i] >= '0' && str[i] <= '9'))
		*handler = 0;
	while (str[i] >= '0' && str[i] <= '9' && ++(*handler))
		res = res * 10 + str[i++] - '0';
	if (str[i] != '\0')
		*handler = 0;
	return (res * sign);
}

int ft_dublicat(int *arr, int len)
{
	int i = 0;
	int count = 0;
	while (i < len)
	{
		int j = 0;
		while (j < len)
		{
			if (arr[i] == arr[j])
			{
				count++;
				j++;
			}
			else
				j++;
		}
		i++;
	}
	if (count > len)
		return 1;
	return 0;
}

void ft_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

int nbr(char **str, int n)
{
	int f = 0;
	int i = 1;
	t_split len;
	while (i < n)
	{
		len = ft_split(str[i], ' ');
		f = f + len.num;
		i ++;
	}
	return f;
}
