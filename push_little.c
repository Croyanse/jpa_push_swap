/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaterno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:00:06 by jpaterno          #+#    #+#             */
/*   Updated: 2022/03/18 14:40:45 by jpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushlittle(t_lena *a, t_lena *b)
{
	int	i;
	int	ix;
	int	little;

	i = 0;
	ix = 0;
	while (a->len != 3)
		pb (a, b);
	while (a->ar[2] < a->ar[1] || a->ar[2] < a->ar[0])
	{
		if (a->ar[1] > a->ar[0])
			rra (a);
		else
			ra(a);
	}
	little = a->ar[2];
	if (a->ar[1] < a->ar[0])
		sa (a);
}
