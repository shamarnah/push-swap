/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 20:56:27 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/20 21:30:47 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rr(s_list **s)
{
	s_list	*n;
	s_list	*tmp;

	if (!s || !*s || !(*s)->next)
		return ;
	n = *s;
	tmp = *s;
	while (n->next)
		n = n->next;
	while (tmp->next != n)
		tmp = tmp->next;
	n->next = *s;
	*s = n;
	tmp->next = NULL;
}
void	rra(s_list **s)
{
	rr(s);
	write(1, "rra\n", 4);
}
void	rrb(s_list **s)
{
	rr(s);
	write(1, "rrb\n", 4);
}
void	rrr(s_list **s1, s_list **s2)
{
	rr(s1);
	rr(s2);
	write(1, "rrr\n", 4);
}