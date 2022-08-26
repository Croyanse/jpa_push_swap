/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_ope2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaterno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:30:47 by jpaterno          #+#    #+#             */
/*   Updated: 2022/03/18 14:30:57 by jpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_lena *a)
{
	int	swap;
	int	i;

	if (a->len == 0)
		return ;
	i = -1;
	swap = a->ar[0];
	while (i++ != a->len - 1)
		a->ar[i] = a->ar[i + 1];
	a->ar[a->len - 1] = swap;
}

void	rr(t_lena *a, t_lena *b)
{
	ra(a);
	rb(b);
}

void	rra(t_lena *a)
{
	int	swap;
	int	i;
	int	x;
	int	x2;

	if (a->len < 2)
		return ;
	i = 0;
	x = a->ar[i];
	swap = a->ar[a->len - 1];
	while (i != a->len - 1)
	{
		x2 = a->ar[i + 1];
		a->ar[i + 1] = x;
		x = x2;
		i++;
	}
	a->ar[0] = swap;
}

void	rrb(t_lena *a)
{
	int	swap;
	int	i;
	int	x;
	int	x2;

	i = 0;
	if (a->len < 2)
		return ;
	x = a->ar[i];
	swap = a->ar[a->len - 1];
	while (i != a->len - 1)
	{
		x2 = a->ar[i + 1];
		a->ar[i + 1] = x;
		x = x2;
		i++;
	}
	a->ar[0] = swap;
}

void	rrr(t_lena *a, t_lena *b)
{
	rrb(b);
	rra(a);
}
