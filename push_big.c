/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaterno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:00:06 by jpaterno          #+#    #+#             */
/*   Updated: 2022/03/18 17:49:15 by jpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushbig(t_lena *a, t_lena *b)
{
	int	i;
	int	ix;
	int	*asorted;
	int	*apos;

	apos = malloc(a->len * sizeof(int));
	if (!apos)
		return ;
	i = 0;
	ix = 0;
	asorted = get_sortedar(a);
	while (ix != a->len)
	{
		while (a->ar[i] != asorted[ix])
			i++;
		apos[i] = ix++ + 1;
		i = 0;
	}
	free(a->ar);
	a->ar = apos;
	ft_big (a, b);
	free(asorted);
	free(a->ar);
}
