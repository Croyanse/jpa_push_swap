/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaterno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:35:10 by jpaterno          #+#    #+#             */
/*   Updated: 2022/03/16 19:06:41 by jpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_in_array(int nb, int *a, int zone)
{
	while (a[zone] != nb && zone != -1)
		zone--;
	if (a[zone] == nb)
		return (1);
	return (0);
}

int	get_pos(t_lena *a, int x)
{
	int	i;

	i = 0;
	while (a->ar[i++] != x)
		;
	if (i < a->len / 2)
		return (1);
	return (0);
}

int	is_available(int x, t_lena *a, int y, int m)
{
	int	i;

	i = 0;
	while (a->ar[i++] != y)
		;
	while (a->ar[i] != x && a->ar[i] != m)
		i++;
	if (a->ar[i] == x)
		return (1);
	return (0);
}

int	*get_sortedar(t_lena *x)
{
	int	swap;
	int	*sorted;
	int	ix;
	int	i;
	int	before;

	swap = 2147483647;
	sorted = malloc(x->len * sizeof(int));
	ix = 0;
	i = -1;
	before = -2147483647;
	while (ix != x->len)
	{
		while (++i != x->len)
			if (swap > x->ar[i] && before < x->ar[i])
				swap = x->ar[i];
	i = -1;
	sorted[ix++] = swap;
	before = swap;
	swap = 2147483647;
	}
	return (sorted);
}

int	get_little2(t_lena *x)
{
	int	swap;
	int	i;

	swap = 2147483647;
	i = 0;
	while (i != x->len)
	{
		if (swap > x->ar[i])
			swap = x->ar[i];
		i++;
	}
	return (swap);
}
