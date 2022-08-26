/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaterno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:00:21 by jpaterno          #+#    #+#             */
/*   Updated: 2022/03/18 18:18:10 by jpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_checkifsort(t_lena *a, t_lena *b)
{
	int	i;

	i = 0;
	if (b->len != 0)
		return (0);
	while (i + 1 < a->len)
	{
		if (a->ar[i] > a->ar[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	*ft_more(t_lena *x)
{
	int	i;
	int	*new;

	if (x->len == 0)
	{
		x->len = 1;
		return (malloc(1 * sizeof(int)));
	}
	new = malloc((x->len + 1) * sizeof(int));
	if (!new)
		return (0);
	i = x->len;
	while (i != 0)
	{
		new[i] = x->ar[i - 1];
		i--;
	}
	free (x->ar);
	x->len = x->len + 1;
	new[0] = 99999;
	return (new);
}

int	*ft_less(t_lena *x)
{
	int	i;
	int	*new;

	if (x->len == 1)
	{
		x->len = 0;
		free (x->ar);
		return (NULL);
	}
	new = malloc((x->len - 1) * sizeof(int));
	if (!new)
		return (0);
	i = x->len - 2;
	while (i != -1)
	{
		new[i] = x->ar[i + 1];
		i--;
	}
	free (x->ar);
	x->len--;
	return (new);
}

int	get_little(t_lena *a, int bef, t_lena *y)
{
	int	i;
	int	swap;

	i = 0;
	swap = 2147483647;
	if (a->len == y->len)
		return (0);
	while (i < a->len)
	{
		if (swap > a->ar[i] && a->ar[i] > bef)
			swap = a->ar[i];
		i++;
	}
	return (swap);
}

void	ra(t_lena *a)
{
	int	swap;
	int	i;

	i = 0;
	swap = a->ar[0];
	while (i != a->len - 1)
	{
		a->ar[i] = a->ar[i + 1];
		i++;
	}
	a->ar[a->len - 1] = swap;
}
