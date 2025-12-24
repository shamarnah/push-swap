/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 19:04:06 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/21 15:43:25 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	p(s_list **s1, s_list **s2)
{
	s_list	*n;

	if (!s1 || !*s1)
		return ;
	n = *s1;
	*s1 = (*s1)->next;
	n->next = *s2;
	*s2 = n;
}
void	pa(s_list **s1, s_list **s2)
{
	p(s1, s2);
	write(1, "pa\n", 3);
}
void	pb(s_list **s1, s_list **s2)
{
	p(s1, s2);
	write(1, "pb\n", 3);
}