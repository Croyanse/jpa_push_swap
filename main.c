/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaterno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:35:12 by jpaterno          #+#    #+#             */
/*   Updated: 2022/03/24 18:20:15 by jpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_lena	a;
	t_lena	b;
	int		check;

	i = -1;
	argv++;
	argc--;
	a.ar = ft_split_malloc(&argc, &argv, &check);
	if (argc <= 1)
		return (0);
	a.len = argc;
	b.len = 0;
	while (argv[++i])
	{
		if (!argv[i][0])
			return (ft_free(a.ar, 1, check, &argv));
		a.ar[i] = ft_atoi(argv[i]);
	}
	if (ck_di (&argv[0]) == 0 || ck_dup (&a) == 1 || ck_mx(&a, &argv[0]) == 1)
		return (ft_free(a.ar, 1, check, &argv));
	if (a.len == 2 && a.ar[0] > a.ar[1])
		sa (&a);
	return (main2(&a, &b, &argv, check));
}

int	main2(t_lena *a, t_lena *b, char ***argv, int check)
{
	if (ft_checkifsort(a, b))
		return (ft_free(a->ar, 0, check, argv));
	else if (a->len <= 5)
		ft_pushmed (a, b);
	else
		ft_pushbig (a, b);
	if (check == 0)
	{
		while (argv[0][check])
			free (argv[0][check++]);
		free (argv[0]);
	}
	return (0);
}

int	ck_dup(t_lena *a)
{
	int	g;
	int	s;
	int	i;
	int	checker;

	g = -1;
	s = 0;
	while (++g != a->len)
	{
		i = 0;
		checker = 2;
		while (i != a->len)
		{	
			if (a->ar[g] == a->ar[i++])
				checker--;
			if (checker == 0)
				return (1);
		}
	}
	return (0);
}

int	ft_free(int *a, int v, int check, char ***argv)
{
	free (a);
	if (v == 1)
		ft_printf("Error\n");
	if (check == 0)
	{
		while (argv[0][check])
			free (argv[0][check++]);
		free (argv[0]);
	}
	return (0);
}
