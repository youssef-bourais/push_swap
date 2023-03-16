/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:14:26 by ybourais          #+#    #+#             */
/*   Updated: 2023/03/16 11:48:00 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	nbr_word(char *str, char c)
{
	size_t	i;
	int		nbr;

	nbr = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
		{
			nbr = nbr + 1;
		}
		i++;
	}
	return (nbr);
}

int	end_word(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
		{
			return (i + 1);
		}
		i++;
	}
	return (0);
}

void	*ft_memcpy(void *dst, void *src, int n)
{
	char	*s;
	char	*d;
	int		i;

	s = (char *)src;
	d = (char *)dst;
	if (!s && !d)
		return (0);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

char	*ft_substr(char *s, unsigned int start, int len)
{
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	else
		ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}

t_split	ft_split(char *s, char c)
{
	t_split	split;
	int		i;
	int		j;
	int		k;

	k = 0;
	split.strings = (char **)malloc((nbr_word(s, c) + 1) * sizeof(char *));
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			j = end_word(s + i, c);
			split.strings[k++] = ft_substr(s, i, j);
			i = i + j;
		}
	}
	split.num = k;
	return (split);
}
