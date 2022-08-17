/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_sorting2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 06:55:34 by slepetit          #+#    #+#             */
/*   Updated: 2022/08/16 06:55:57 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

void	ft_sort_group_three_a(t_stack **lst)
{
	if (ft_previously_tris(lst, 3) == 111)
	{
		ft_sa(lst);
		ft_rra(lst);
	}
	else if (ft_previously_tris(lst, 3) == 11)
		ft_rra(lst);
	else if (ft_previously_tris(lst, 3) == 101)
		ft_ra(lst);
	else if (ft_previously_tris(lst, 3) == 100)
		ft_sa(lst);
	else if (ft_previously_tris(lst, 3) == 10)
	{
		ft_rra(lst);
		ft_sa(lst);
	}
}

void	ft_sort_group_three_b(t_stack **lst)
{
	if (ft_previously_tris(lst, 3) == 0)
	{
		ft_sb(lst);
		ft_rrb(lst);
	}
	else if (ft_previously_tris(lst, 3) == 11)
		ft_sb(lst);
	else if (ft_previously_tris(lst, 3) == 101)
	{
		ft_rrb(lst);
		ft_sb(lst);
	}
	else if (ft_previously_tris(lst, 3) == 100)
		ft_rrb(lst);
	else if (ft_previously_tris(lst, 3) == 10)
	{
		ft_rrb(lst);
		ft_rrb(lst);
	}
}
