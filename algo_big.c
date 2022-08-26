/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaterno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:49:04 by jpaterno          #+#    #+#             */
/*   Updated: 2022/03/18 14:39:39 by jpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_big(t_lena *a, t_lena *b)
{
	int	i;
	int	ix;
	int	j;
	int	len;

	i = 0;
	ix = 0;
	j = 0;
	len = 1;
	while (ft_checkifsort(a, b) == 0)
	{
		len = a->len;
		while (len != 0)
		{
			if ((a->ar[0] >> ix) & 1)
				ra (a);
			else
				pb (a, b);
			len--;
		}
		while (b->len != 0)
			pa (a, b);
		ix++;
	}	
	return (i);
}
