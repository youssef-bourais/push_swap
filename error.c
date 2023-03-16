/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:36:14 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/16 12:25:43 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *str, int *handler)
{
	int	i;
	long	res;
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

int	ft_dublicat(int *arr, int len)
{
	int	i;
	int	count;
	int	j;

	i = 0;
	count = 0;
	while (i < len)
	{
		j = 0;
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
		return (1);
	return (0);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	nbr(char **str, int n)
{
	int		f;
	int		i;
	t_split	len;

	f = 0;
	i = 1;
	while (i < n)
	{
		len = ft_split(str[i], ' ');
		ft_free_table(len.strings, len.num);
		f = f + len.num;
		i++;
	}
	return (f);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
