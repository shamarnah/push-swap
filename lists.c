/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 16:40:19 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/23 17:10:49 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

s_list	*cnode(long x)
{
	s_list	*s;

	s = malloc(sizeof(s_list));
	if (!s)
		return (NULL);
	s->content = x;
	s->next = NULL;
	return (s);
}

void	anode(s_list **s, s_list *cn)
{
	s_list	*tmp;

	if (!cn || !s)
		return ;
	if (!*s)
	{
		*s = cn;
		return ;
	}
	tmp = *s;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = cn;
}

void	listclear(s_list **s)
{
	s_list	*tmp;
	s_list	*tmp2;

	if (!s || !*s)
		return ;
	tmp = *s;
	while (tmp)
	{
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}
	(*s) = NULL;
}

int	listsize(s_list **s)
{
	s_list	*tmp;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	tmp = *s;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
