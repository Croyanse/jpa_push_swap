/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_med.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaterno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:31:43 by jpaterno          #+#    #+#             */
/*   Updated: 2022/03/18 16:52:02 by jpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_out2int(t_lena *a, t_lena *b, int litt1, int litt2)
{
	while (a->len != 3)
	{
		if (get_pos(a, litt1))
			rra (a);
		else
			ra (a);
		if (a->ar[0] == litt1 || a->ar[0] == litt2)
		{
			if (a->ar[0] == litt1)
				litt1 = litt2;
			pb (a, b);
		}
	}
}

void	ft_pushmed(t_lena *a, t_lena *b)
{
	int	i;
	int	little;
	int	little2;

	i = -1;
	little = 2147483647;
	little2 = 2147483647;
	while (++i != a->len)
		if (little > a->ar[i])
			little = a->ar[i];
	i = -1;
	while (++i != a->len && a->len != 4)
		if (little2 > a->ar[i] && a->ar[i] != little)
			little2 = a->ar[i];
	get_out2int (a, b, little, little2);
	ft_pushlittle (a, b);
	if (b->len == 2)
		if (b->ar[0] < b->ar[1])
			sb (b);
	while (b->len != 0)
		pa (a, b);
	free (a->ar);
}
