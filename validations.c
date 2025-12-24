/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:15:25 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/24 12:12:51 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	digit(char *s)
{
	int	i;

	i = 0;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (s[i] == '+' || s[i] == '-')
			i++;
		else if (s[i] < 48 || s[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

int	repeated(char *s)
{
	int	i;
	int	j;
	
	i = 0;
	if (!s)
		return 0;
	while (s[i])
	{
		long	x;
		long	y;

		x = ft_atol(s[i]);
		j = i + 1;
		while (s[j])
		{
			y = ft_atol(s[j]);
			if (x == y)
				return 0;
			j++;
		}
		i++;
	}
	return (1);
}

int	issorted(s_list *s)
{
	if (!s || !s->next)
		return (1);
	while (s->next)
	{
		if (s->next->content < s->content)
			return (0);
		s = s->next;
	}
	return (1);
}

int	minimum(s_list **s)
{
	long min;
	s_list *tmp;

	tmp = *s;
	min = tmp->content;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}