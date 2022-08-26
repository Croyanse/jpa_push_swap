/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaterno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:19:32 by jpaterno          #+#    #+#             */
/*   Updated: 2022/03/31 18:20:05 by jpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_split_malloc(int *argc, char ***argv, int *check)
{
	int		count;
	char	**crea;

	*check = 1;
	if (*argc == 0)
		return (0);
	count = ft_nbwords(**argv, 32);
	if (*argc == 1 && count > 1)
	{
		crea = ft_split(argv[0][0], 32);
		argv[0] = crea;
		*argc = count;
		*check = 0;
	}
	if (*argc > 1)
		return (malloc(*argc * sizeof(int)));
	return (0);
}

int	ck_di(char **ar)
{
	int	i;
	int	ix;

	i = 0;
	while (ar[i])
	{	
		ix = 0;
		while (ar[i][ix])
		{
			if (ft_isdigit(ar[i][ix]) == 0)
			{
				if (ar[i][ix] == '-' && ft_isdigit(ar[i][ix + 1] == 0))
					return (0);
				else if (ar[i][ix] == '-' && !(ar[i][ix + 1]))
					return (0);
				else if (ar[i][ix] != '-')
					return (0);
			}
			ix++;
		}
		i++;
	}
	return (1);
}

int	ck_mx(t_lena *a, char **argv)
{
	int		i;
	char	*itoa;

	i = 0;
	while (i != a->len)
	{
		itoa = ft_itoa(a->ar[i]);
		if (ft_strncmp(itoa, argv[i], 2) == 1)
		{
			free (itoa);
			return (1);
		}
		free (itoa);
		i++;
	}
	return (0);
}
