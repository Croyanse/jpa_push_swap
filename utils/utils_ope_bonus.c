/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaterno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:56:58 by jpaterno          #+#    #+#             */
/*   Updated: 2022/03/18 17:53:22 by jpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_lena *a)
{
	int	swap;
	int	i;

	if (a->len == 1 || a->len == 0)
		return ;
	i = 0;
	swap = a->ar[i];
	a->ar[i] = a->ar[i + 1];
	a->ar[i + 1] = swap;
}

void	sb(t_lena *a)
{
	int	swap;
	int	i;

	if (a->len == 1 || a->len == 0)
		return ;
	i = 0;
	swap = a->ar[i];
	a->ar[i] = a->ar[i + 1];
	a->ar[i + 1] = swap;
}

void	ss(t_lena *a, t_lena *b)
{
	sb (b);
	sa (a);
}

int	pa(t_lena *a, t_lena *b)
{
	if (b->len == 0)
		return (0);
	a->ar = ft_more (a);
	a->ar[0] = b->ar[0];
	b->ar = ft_less (b);
	return (0);
}

int	pb(t_lena *a, t_lena *b)
{
	if (a->len == 0)
		return (0);
	b->ar = ft_more (b);
	b->ar[0] = a->ar[0];
	a->ar = ft_less (a);
	return (0);
}
