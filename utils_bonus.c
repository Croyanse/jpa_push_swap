/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaterno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:11:01 by jpaterno          #+#    #+#             */
/*   Updated: 2022/03/27 18:13:04 by jpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_execope(char *ope, t_lena *a, t_lena *b)
{
	if (ope[0] == 's' && ope[1] == 'a')
		sa (a);
	else if (ope[0] == 's' && ope[1] == 'b')
		sb (b);
	else if (ope[0] == 's' && ope[1] == 's')
		ss (a, b);
	else if (ope[0] == 'p' && ope[1] == 'a')
		pa (a, b);
	else if (ope[0] == 'p' && ope[1] == 'b')
		pb (a, b);
	else if (ope[0] == 'r' && ope[1] == 'a')
		ra (a);
	else if (ope[0] == 'r' && ope[1] == 'b')
		rb (a);
	else if (ope[2])
	{
		if (ope[2] == 'a')
			rra (a);
		if (ope [2] == 'b')
			rrb (b);
		if (ope [2] == 'r')
			rrr (a, b);
	}
	else if (!ope[2])
		rr (a, b);
}

int	ft_ckope(char *ope)
{
	if (ope[0] == 's' && ope[1] == 'a')
		return (1);
	else if (ope[0] == 's' && ope[1] == 'b')
		return (1);
	else if (ope[0] == 's' && ope[1] == 's')
		return (1);
	else if (ope[0] == 'p' && ope[1] == 'a')
		return (1);
	else if (ope[0] == 'p' && ope[1] == 'b')
		return (1);
	else if (ope[0] == 'r' && ope[1] == 'a')
		return (1);
	else if (ope[0] == 'r' && ope[1] == 'b')
		return (1);
	else if (ope[2])
	{
		if (ope[2] == 'a')
			return (1);
		if (ope [2] == 'b')
			return (1);
		if (ope [2] == 'r')
			return (1);
	}
	return (0);
}

int	ft_checkin(char *ope, t_lena *b)
{
	if (ft_strlen(ope) <= 4)
		return (1);
	if (ft_strlen(ope) >= 5 || ft_strlen(ope) == 2)
		return (0);
	if (ope[2] == 'a' || ope[2] == 'b' || ope[2] == 'r')
		return (1);
	else
		free(b->ar);
	return (0);
}

int	ft_checker(t_lena *a, t_lena *b)
{
	char	*ope;

	ope = NULL;
	while (ft_checkifsort(a, b) != 1 || b->len >= 1)
	{
		ope = get_next_line(0);
		if ((ope[0] == '\n' || ft_ckope(ope) == 0 || ft_checkin(ope, b) == 0))
		{
			ft_printf("KO\n");
			free(ope);
			return (0);
		}
		ft_execope(ope, a, b);
		free(ope);
	}
	ft_printf ("OK\n");
	return (1);
}
