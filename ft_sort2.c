/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 06:55:34 by slepetit          #+#    #+#             */
/*   Updated: 2022/09/07 00:17:55 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

void	ft_sort_group_three_a(t_stack **lst)
{
	if (ft_previous_sort(lst, 3) == 111)
	{
		ft_sa(lst);
		ft_rra(lst);
	}
	else if (ft_previous_sort(lst, 3) == 11)
		ft_rra(lst);
	else if (ft_previous_sort(lst, 3) == 101)
		ft_ra(lst);
	else if (ft_previous_sort(lst, 3) == 100)
		ft_sa(lst);
	else if (ft_previous_sort(lst, 3) == 10)
	{
		ft_rra(lst);
		ft_sa(lst);
	}
}

void	ft_sort_group_three_b(t_stack **lst)
{
	if (ft_previous_sort(lst, 3) == 0)
	{
		ft_sb(lst);
		ft_rrb(lst);
	}
	else if (ft_previous_sort(lst, 3) == 11)
		ft_sb(lst);
	else if (ft_previous_sort(lst, 3) == 101)
	{
		ft_rrb(lst);
		ft_sb(lst);
	}
	else if (ft_previous_sort(lst, 3) == 100)
		ft_rrb(lst);
	else if (ft_previous_sort(lst, 3) == 10)
	{
		ft_rrb(lst);
		ft_rrb(lst);
	}
}

void	ft_sort_group_four(t_stack **a, t_stack **b)
{
	if ((*a)->pos > (*a)->next->pos)
		ft_sa(a);
	ft_pb(a, b);
	ft_sort_group_three_a(a);
	ft_pa(a, b);
	if (!ft_is_list_sort(a))
		ft_sort_group_four(a, b);
}

void	ft_sort_group_five(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if ((*a)->pos == 1 || (*a)->pos == 2 || (*a)->pos == 3)
			ft_pb(a, b);
		else
			ft_ra(a);
		i++;
	}
	ft_sort_group_three_b(b);
	if ((*a)->pos > (*a)->next->pos)
		ft_sa(a);
	ft_pa(a, b);
	ft_pa(a, b);
	ft_pa(a, b);
}
