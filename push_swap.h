/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 19:18:17 by samarnah          #+#    #+#             */
/*   Updated: 2025/12/24 12:13:34 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_H
# define SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct t_list
{
	long	content;
	s_list	*next;
}			s_list;
int			digit(char *s);
int			repeated(char *s);
int			issorted(s_list *s);
int			minimum(s_list **s);
long		ft_atol(const char *nptr);
void		sa(s_list **s1);
void		sb(s_list **s1);
void		ss(s_list **s1, s_list **s2);
void		pa(s_list **s1, s_list **s2);
void		pb(s_list **s1, s_list **s2);
void		ra(s_list **s);
void		rb(s_list **s);
void		rr(s_list **s1, s_list **s2);
void		rra(s_list **s);
void		rrb(s_list **s);
void		rrr(s_list **s1, s_list **s2);
s_list		*cnode(long x);
void		anode(s_list **s, s_list *cn);
void		listclear(s_list **s);
int			listsize(s_list **s);
void		two(s_list **s);
void		three(s_list **s);
void		four(s_list **s, s_list **b);
void		five(s_list **s, s_list **b);

#endif
