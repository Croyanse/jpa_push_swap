/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaterno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:00:09 by jpaterno          #+#    #+#             */
/*   Updated: 2022/03/28 20:01:36 by jpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# define _CRTDBG_MAP_ALLOC

void	ft_pushbig(t_lena *a, t_lena *b);
void	ft_pushmed(t_lena *a, t_lena *b);
void	ft_pushlittle(t_lena *a, t_lena *b);

int		*ft_more(t_lena *x);
int		*ft_less(t_lena *x);
int		ft_big(t_lena *a, t_lena *b);
int		ft_sortv2(t_lena *a, t_lena *b);
int		get_little(t_lena *a, int before, t_lena *y);
int		ft_checkifsort(t_lena *a, t_lena *b);
int		is_in_array(int nb, int *a, int zone);
int		is_available(int x, t_lena *a, int y, int m);
int		get_pos(t_lena *a, int x);
int		*get_sortedar(t_lena *x);
int		ft_enda(t_lena *a, t_lena *b, int little, t_lena *y);
int		get_little2(t_lena *x);
int		ck_dup(t_lena *a);
int		ft_free(int *a, int v, int check, char ***argv);
int		ck_di(char **ar);
int		ck_mx(t_lena *a, char **argv);
void	ft_execope(char *ope, t_lena *a, t_lena *b);
int		ft_checkopein(char *ope);
int		ft_checker(t_lena *a, t_lena *b);
int		ft_checkin(char *ope, t_lena *b);
int		*ft_split_malloc(int *argc, char ***argv, int *check);
int		main2(t_lena *a, t_lena *b, char ***argv, int check);

void	sa(t_lena *a);
void	sb(t_lena *a);
void	ss(t_lena *a, t_lena *b);
int		pa(t_lena *a, t_lena *b);
int		pb(t_lena *a, t_lena *b);
void	ra(t_lena *a);
void	rb(t_lena *a);
void	rr(t_lena *a, t_lena *b);
void	rra(t_lena *a);
void	rrb(t_lena *a);
void	rrr(t_lena *a, t_lena *b);

#endif 
